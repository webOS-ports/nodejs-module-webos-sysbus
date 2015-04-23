/* @@@LICENSE
*
*      Copyright (c) 2010-2015 LG Electronics, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */

// Generated file, do not edit. See generate_templates.rb for details on how to regenerate.

#pragma once

// arity: 0, const:

template <typename T,typename RV> void MemberFunctionWrapper(RV (T::*MemFunc)(), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 0) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 0 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)()));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 1, const:

template <typename T,typename RV,typename T1> void MemberFunctionWrapper(RV (T::*MemFunc)(T1), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 1) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 1 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 2, const:

template <typename T,typename RV,typename T1,typename T2> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 2) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 2 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 3, const:

template <typename T,typename RV,typename T1,typename T2,typename T3> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2,T3), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 3) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 3 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2,p3)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 4, const:

template <typename T,typename RV,typename T1,typename T2,typename T3,typename T4> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2,T3,T4), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 4) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 4 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2,p3,p4)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 5, const:

template <typename T,typename RV,typename T1,typename T2,typename T3,typename T4,typename T5> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2,T3,T4,T5), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 5) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 5 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
      ConvertFromJS<T5> p5(info[4]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2,p3,p4,p5)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 6, const:

template <typename T,typename RV,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2,T3,T4,T5,T6), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 6) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 6 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
      ConvertFromJS<T5> p5(info[4]);
    
      ConvertFromJS<T6> p6(info[5]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2,p3,p4,p5,p6)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 0, const: 

template <typename T> void VoidMemberFunctionWrapper(void (T::*MemFunc)(), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 0) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 0 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
     (o->*MemFunc)();
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 1, const: 

template <typename T,typename T1> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 1) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 1 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
     (o->*MemFunc)(p1);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 2, const: 

template <typename T,typename T1,typename T2> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 2) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 2 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
     (o->*MemFunc)(p1,p2);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 3, const: 

template <typename T,typename T1,typename T2,typename T3> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2,T3), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 3) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 3 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
     (o->*MemFunc)(p1,p2,p3);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 4, const: 

template <typename T,typename T1,typename T2,typename T3,typename T4> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2,T3,T4), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 4) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 4 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
     (o->*MemFunc)(p1,p2,p3,p4);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 5, const: 

template <typename T,typename T1,typename T2,typename T3,typename T4,typename T5> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2,T3,T4,T5), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 5) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 5 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
      ConvertFromJS<T5> p5(info[4]);
    
     (o->*MemFunc)(p1,p2,p3,p4,p5);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 6, const: 

template <typename T,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2,T3,T4,T5,T6), const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 6) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 6 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
      ConvertFromJS<T5> p5(info[4]);
    
      ConvertFromJS<T6> p6(info[5]);
    
     (o->*MemFunc)(p1,p2,p3,p4,p5,p6);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 0, const: const

template <typename T,typename RV> void MemberFunctionWrapper(RV (T::*MemFunc)() const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 0) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 0 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)()));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 1, const: const

template <typename T,typename RV,typename T1> void MemberFunctionWrapper(RV (T::*MemFunc)(T1) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 1) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 1 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 2, const: const

template <typename T,typename RV,typename T1,typename T2> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 2) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 2 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 3, const: const

template <typename T,typename RV,typename T1,typename T2,typename T3> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2,T3) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 3) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 3 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2,p3)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 4, const: const

template <typename T,typename RV,typename T1,typename T2,typename T3,typename T4> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2,T3,T4) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 4) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 4 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2,p3,p4)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 5, const: const

template <typename T,typename RV,typename T1,typename T2,typename T3,typename T4,typename T5> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2,T3,T4,T5) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 5) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 5 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
      ConvertFromJS<T5> p5(info[4]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2,p3,p4,p5)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 6, const: const

template <typename T,typename RV,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6> void MemberFunctionWrapper(RV (T::*MemFunc)(T1,T2,T3,T4,T5,T6) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate*  isolate = info.GetIsolate();
  if (info.Length() != 6) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 6 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
      ConvertFromJS<T5> p5(info[4]);
    
      ConvertFromJS<T6> p6(info[5]);
    
    info.GetReturnValue().Set(ConvertToJS<RV>((o->*MemFunc)(p1,p2,p3,p4,p5,p6)));
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::Exception::Error(v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 0, const:  const

template <typename T> void VoidMemberFunctionWrapper(void (T::*MemFunc)() const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 0) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 0 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
     (o->*MemFunc)();
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 1, const:  const

template <typename T,typename T1> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 1) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 1 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
     (o->*MemFunc)(p1);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 2, const:  const

template <typename T,typename T1,typename T2> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 2) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 2 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
     (o->*MemFunc)(p1,p2);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 3, const:  const

template <typename T,typename T1,typename T2,typename T3> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2,T3) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 3) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 3 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
     (o->*MemFunc)(p1,p2,p3);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 4, const:  const

template <typename T,typename T1,typename T2,typename T3,typename T4> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2,T3,T4) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 4) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 4 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
     (o->*MemFunc)(p1,p2,p3,p4);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 5, const:  const

template <typename T,typename T1,typename T2,typename T3,typename T4,typename T5> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2,T3,T4,T5) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 5) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 5 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
      ConvertFromJS<T5> p5(info[4]);
    
     (o->*MemFunc)(p1,p2,p3,p4,p5);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}



// arity: 6, const:  const

template <typename T,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6> void VoidMemberFunctionWrapper(void (T::*MemFunc)(T1,T2,T3,T4,T5,T6) const, const v8::FunctionCallbackInfo<v8::Value>& info )
{
  v8::Isolate* isolate = info.GetIsolate();
  if (info.Length() != 6) {
    info.GetReturnValue().Set(isolate->ThrowException(v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Invalid number of parameters, 6 expected."))));
    return;
  }

  T *o = node::ObjectWrap::Unwrap<T>(info.This());
  if (!o) {
    info.GetReturnValue().Set(isolate->ThrowException(
      v8::String::NewFromUtf8(isolate, "Unable to unwrap native object.")));
    return;
  }

  try {
    
      ConvertFromJS<T1> p1(info[0]);
    
      ConvertFromJS<T2> p2(info[1]);
    
      ConvertFromJS<T3> p3(info[2]);
    
      ConvertFromJS<T4> p4(info[3]);
    
      ConvertFromJS<T5> p5(info[4]);
    
      ConvertFromJS<T6> p6(info[5]);
    
     (o->*MemFunc)(p1,p2,p3,p4,p5,p6);
     info.GetReturnValue().SetUndefined();
  } catch( std::exception const & ex ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, ex.what()))));
  } catch( ... ) {
    info.GetReturnValue().Set(isolate->ThrowException( v8::Exception::Error(
      v8::String::NewFromUtf8(isolate, "Native function threw an unknown exception."))));
  }
}


