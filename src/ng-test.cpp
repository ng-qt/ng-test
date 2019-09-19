/* https://myprogrammingnotes.com/simulate-mouse-click-using-qt-test-lib.html */
#include "ng-test.h"
#include "utils.h"
#include <QTest>
#include <QWidget>
#include <qtest_widgets.h>
#include <napi.h>

Napi::FunctionReference NgTest::constructor;

Napi::Object NgTest::Init(Napi::Env env, Napi::Object exports) {
  Napi::Function func = DefineClass(env, "NgTest", {
    InstanceMethod("keyClick", &NgTest::KeyClick),
    InstanceMethod("keyPress", &NgTest::KeyPress),
  });

  constructor = Napi::Persistent(func);

	constructor.SuppressDestruct();
  exports.Set("NgTest", func);

  return exports;
}

NgTest::NgTest(const Napi::CallbackInfo &info) : Napi::ObjectWrap<NgTest>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  try {
    Napi::Object nodeWidget = info[0].As<Napi::Object>();
    /** @HINT
     * We probably shouldn't do this as the NodeGUI API ought to change
     * Instead let the end user provide the actual native widget themselves
     */
    Napi::Object native = nodeWidget.Get("native").As<Napi::Object>();

    _widget = Napi::ObjectWrap<QWidget>::Unwrap(native);
  } catch (...) {
    Napi::TypeError::New(env, "Expected an instance of NodeWidget").ThrowAsJavaScriptException();
  }
}

void NgTest::KeyPress(const Napi::CallbackInfo &info) {
	Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

	int len = info.Length();

	if (len < 1 || len > 3) {
		return Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
	}

	if (info[0].IsNumber()) {
	    Qt::Key key = numToKey(info[0]);
  	  QTest::keyClick(_widget, key);
  	} else if (info[0].IsString()) {
      char key = strToChar(info[0]);
      QTest::keyClick(_widget, key);
  	} else {
  		return Napi::TypeError::New(env, "argument key must be a string").ThrowAsJavaScriptException();
  	}
}

void NgTest::KeyClick(const Napi::CallbackInfo &info) {
	Napi::Env env = info.Env();

	int len = info.Length();

	if (len < 1 || len > 3) {
		return Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
	}

	if (info[0].IsNumber()) {
    Qt::Key key = numToKey(info[0]);
	  QTest::keyClick(_widget, key);
	} else if (info[0].IsString()) {
    char key = strToChar(info[0]);
    QTest::keyClick(_widget, key);
	} else {
		return Napi::TypeError::New(env, "argument key must be a string").ThrowAsJavaScriptException();
	}
}