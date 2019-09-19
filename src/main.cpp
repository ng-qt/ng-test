#include "ng-test.h"
#include <napi.h>

Napi::Object Main(Napi::Env env, Napi::Object exports) {
  NgTest::Init(env, exports);
  return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Main)