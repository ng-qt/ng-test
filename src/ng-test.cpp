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
                      InstanceMethod("keyClicks", &NgTest::KeyClicks),
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

  Qt::KeyboardModifier modifier = Qt::NoModifier;

  if (!info[1].IsUndefined()) {
    if (!info[1].IsNumber()) {
      return throwInvalidModifierException(env);
    }

    modifier = toModifier(info[1]);
  }


  if (info[0].IsNumber()) {
    Qt::Key key = toKey(info[0]);
    QTest::keyClick(_widget, key, modifier);
  } else if (info[0].IsString()) {
    char key = toChar(info[0]);
    QTest::keyClick(_widget, key, modifier);
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

  Qt::KeyboardModifier modifier = Qt::NoModifier;

  if (!info[1].IsUndefined()) {
    if (!info[1].IsNumber()) {
      return throwInvalidModifierException(env);
    }

    modifier = toModifier(info[1]);
  }

  if (info[0].IsNumber()) {
    Qt::Key key = toKey(info[0]);
    QTest::keyClick(_widget, key, modifier);
  } else if (info[0].IsString()) {
    char key = toChar(info[0]);
    QTest::keyClick(_widget, key, modifier);
  } else {
    return throwInvalidKeyException(env);
  }
}

void NgTest::KeyClicks(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();

  int len = info.Length();

  if (len < 1 || len > 3) {
    return throwInvalidArgumentsException(env);
  }

  Qt::KeyboardModifier modifier = Qt::NoModifier;
  int delay = 0;

  if (!info[0].IsString()) {
    return Napi::TypeError::New(env, "argument sequence must be a string")
        .ThrowAsJavaScriptException();
  }

  QString sequence = toQString(info[0]);

  if (!info[1].IsUndefined()) {
    if (!info[1].IsNumber()) {
      return throwInvalidModifierException(env);
    }

    modifier = toModifier(info[1]);
  }

  if (!info[2].IsUndefined()) {
    if (!info[2].IsNumber()) {
      return throwInvalidDelayException(env);
    }

    delay = toInt(info[2]);
  }

  QTest::keyClicks(_widget, sequence, modifier, delay);
}
