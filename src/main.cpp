#include "ng-test.h"
#include <napi.h>

Napi::Object Init(Napi::Env env, Napi::Object exports) {
	exports.Set("keyClick", Napi::Function::New(env, NgTest::KeyClick));

	return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)