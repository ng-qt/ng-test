#include "qwidget_wrap.h"

Napi::FunctionReference QWidgetWrap::constructor;

Napi::Object QWidgetWrap::Init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QWidget";
  Napi::Function func = DefineClass(env, CLASSNAME, {});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QWidget *QWidgetWrap::getInternalInstance() { return this->instance; }

QWidgetWrap::QWidgetWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QWidgetWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 0) {
    this->instance = new QWidget();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}

QWidgetWrap::~QWidgetWrap() { delete this->instance; }
