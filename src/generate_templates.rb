#!/usr/bin/env ruby
# @@@LICENSE
#
#      Copyright (c) 2010-2013 LG Electronics, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# LICENSE@@@

require "pp"
require "erb"

def typename_for_index(index)
  "T#{index}"
end

def param_name_for_index(index)
  "p#{index}"
end

def params_decl(arity)
  (1..arity).collect { |p| "#{typename_for_index(p)} #{param_name_for_index(p)}" }.join(",")
end

def params_pass(arity)
  (1..arity).collect { |p| "#{param_name_for_index(p)}" }.join(",")
end

def params_fp_decl(arity)
  (1..arity).collect { |p| "#{typename_for_index(p)}" }.join(",")
end

def types_decl_rv(arity)
  types = ["typename T,typename RV"]
  types.concat((1..arity).collect { |p| "typename #{typename_for_index(p)}" })
  types.join(",")
end

def types_decl(arity)
  t = ""
  if arity != 0
    types = (1..arity).collect { |p| "typename #{typename_for_index(p)}" }
    t = "template <typename T,#{types.join(",")}>"
  else
    t = "template <typename T>"
  end
  t
end

RV_FUNCTION=<<RV_FUNCTION_TEXT

// arity: <%= arity %>, const:<%= const_funcs %>

template <<%= types_decl_rv(arity)%>> void MemberFunctionWrapper(RV (T::*MemFunc)(<%= params_fp_decl(arity) %>)<%= const_funcs %>, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != <%= arity %>) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, <%= arity %> expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    <% (1..arity).each do |i| %>
      ConvertFromJS<<%= typename_for_index(i) %>> <%= param_name_for_index(i) %>(info[<%= i-1 %>]);
    <% end %>
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(<%= params_pass(arity) %>)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}


RV_FUNCTION_TEXT

VOID_FUNCTION=<<VOID_FUNCTION_TEXT

// arity: <%= arity %>, const: <%= const_funcs %>

<%= types_decl(arity)%> void VoidMemberFunctionWrapper(void (T::*MemFunc)(<%= params_fp_decl(arity) %>)<%= const_funcs %>, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != <%= arity %>) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, <%= arity %> expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    <% (1..arity).each do |i| %>
      ConvertFromJS<<%= typename_for_index(i) %>> <%= param_name_for_index(i) %>(info[<%= i-1 %>]);
    <% end %>
     (o->*MemFunc)(<%= params_pass(arity) %>);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}


VOID_FUNCTION_TEXT

File.open("member_function_wrappers.h", "w") do |f|
  ["", " const"].each do |const_funcs|
    (0..6).each do |arity|
      template = ERB.new RV_FUNCTION
      f.puts template.result(binding)
    end
    (0..6).each do |arity|
      template = ERB.new VOID_FUNCTION
      f.puts template.result(binding)
    end
  end
end
