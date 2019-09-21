/* https://myprogrammingnotes.com/simulate-mouse-click-using-qt-test-lib.html */
#include "ng-test.h"
#include "QWidgetWrap/qwidget_wrap.h"
#include "utils.h"
#include "exceptions.h"
#include <QTest>
#include <QWidget>
#include <napi.h>
#include <qtest_widgets.h>

Napi::FunctionReference NgTest::constructor;

Napi::Object NgTest::Init(Napi::Env env, Napi::Object exports) {
  Napi::Function func =
      DefineClass(env, "NgTest",
                  {
                      InstanceMethod("keyClick", &NgTest::KeyClick),
                      InstanceMethod("keyPress", &NgTest::KeyPress),
                  });

  constructor = Napi::Persistent(func);
  constructor.SuppressDestruct();
  exports.Set("NgTest", func);

  return exports;
}

NgTest::NgTest(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<NgTest>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  try {
    Napi::Object nodeWidget = info[0].As<Napi::Object>();
    Napi::Object native = nodeWidget.Get("native").As<Napi::Object>();

    QWidgetWrap *widgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(native);
    _widget = widgetWrap->getInternalInstance();
  } catch (...) {
    Napi::TypeError::New(env, "Expected an instance of NodeWidget")
        .ThrowAsJavaScriptException();
  }
}

// TODO: Add Qt::KeyboardModifier
void NgTest::KeyPress(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int len = info.Length();

  if (len < 1 || len > 2) {
    return throwInvalidArgumentsException(env);
  }

  if (info[0].IsNumber()) {
    Qt::Key key = toKey(info[0]);
    QTest::keyClick(_widget, key);
  } else if (info[0].IsString()) {
    char key = toChar(info[0]);
    QTest::keyClick(_widget, key);
  } else {
    return throwInvalidKeyException(env);
  }
}

// TODO: Add Qt::KeyboardModifier
void NgTest::KeyClick(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();

  int len = info.Length();

  if (len < 1 || len > 2) {
    return throwInvalidArgumentsException(env);
  }

  if (info[0].IsNumber()) {
    Qt::Key key = toKey(info[0]);
    QTest::keyClick(_widget, key);
  } else if (info[0].IsString()) {
    char key = toChar(info[0]);
    QTest::keyClick(_widget, key);
  } else {
    return throwInvalidKeyException(env);
        .ThrowAsJavaScriptException();
  }
}