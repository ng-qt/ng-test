// https://myprogrammingnotes.com/simulate-mouse-click-using-qt-test-lib.html
#include "ng-test.h"
#include <QtTest/QtTest>
#include <QWidget>
#include <qtest_widgets.h>
#include <napi.h>

void NgTest::KeyClick(const Napi::CallbackInfo& info) {
	Napi::Env env = info.Env();

	Qt::KeyboardModifiers modifier;
	int delay;

	if (info.Length() < 2) {
		Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
	}

	Napi::Object nodeWidget = info[0].As<Napi::Object>();
	QWidget *widget = Napi::ObjectWrap<QWidget>::Unwrap(nodeWidget);

	if (!info[1].IsNumber()) {
		Napi::TypeError::New(env, "key must be one of Key").ThrowAsJavaScriptException();
	}

	int nodeKey = info[1].As<Napi::Number>().Int32Value(); // static_cast<Qt::Key>(key);
	Qt::Key key = static_cast<Qt::Key>(nodeKey);

	if (info[2]) {
		if (!info[2].IsNumber()) {
			Napi::TypeError::New(env, "modifier must be one of KeyboardModifier").ThrowAsJavaScriptException();
		}

		int nodeModifier = info[2].As<Napi::Number>().Int32Value();
		modifier = static_cast<Qt::KeyboardModifiers>(nodeModifier);
	} else {
		modifier = Qt::NoModifier;
	}

	if (info[3]) {
		if (!info[3].IsNumber()) {
			Napi::TypeError::New(env, "modifier must be one of KeyboardModifier").ThrowAsJavaScriptException();
		}

		delay = info[1].As<Napi::Number>().Int32Value();
	} else {
		delay = -1;
	}

	QTest::keyClick(widget, key, modifier, delay);
}