#pragma once
#include <QWidget>
#include <napi.h>
#include <stdlib.h>

class QWidgetWrap : public Napi::ObjectWrap<QWidgetWrap> {
private:
  QWidget *instance;

public:
  static Napi::Object Init(Napi::Env env, Napi::Object exports);
  QWidgetWrap(const Napi::CallbackInfo &info);
  ~QWidgetWrap();
  QWidget *getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
};
