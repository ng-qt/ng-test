#include "ng-test.h"
#include <QWidget>
#include <QTest>
#include <napi.h>

//void NgTest:KeyClicks(const Napi::CallbackInfo& info) {
//	Napi::Env env = info.Env();
//}

void NgTest::KeyClick(const Napi::CallbackInfo& info) {
	Napi::Env env = info.Env();

	/*Qt::KeyboardModifiers *qmodifier;
	int delay = 0;

	if (info.Length() < 2) {
		Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavascriptException();
	}

	Napi::Object widget = info[0].As<Napi::Object>();
	QWidget qwidget = Napi::ObjectWrap<Widget>::Unwrap(widget);

	if (!info[1].isNumber()) {
		Napi::TypeError::New(env, "key must be one of Key").ThrowAsJavaScriptException();
	}

	int key = info[1].As<Napi::Number>().Int32Value(); // static_cast<Qt::Key>(key);
	Qt::Key *qkey = static_cast<Qt::Key*>(key);

	if (info[2]) {
		if (!info[2].isNumber()) {
			Napi::TypeError::New(env, "modifier must be one of KeyboardModifier").ThrowAsJavaScriptException();
		}

		// optional modifier
		int modifier = info[2].As<Napi::Number>().Int32Value();
		qmodifier = static_cast<Qt::KeyboardModifiers>(modifier);
	}*/

	/*if (info[3]) {
	 	// no reason to simulate delay
		if (!info[3].isNumber()) {
			Napi::TypeError::New(env, "modifier must be one of KeyboardModifier").ThrowAsJavaScriptException();
		}
	}*/


	// optional delay

	// QTest::keyClick(qwidget, qkey, qmodifier);
}