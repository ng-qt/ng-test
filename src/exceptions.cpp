#include "exceptions.h"
#include "napi.h"

void throwInvalidKeyException(const Napi::Env &env) {
  return Napi::TypeError::New(env, "argument key must be a string")
      .ThrowAsJavaScriptException();
}

void throwInvalidArgumentsException(const Napi::Env &env) {
  return Napi::TypeError::New(env, "Wrong number of arguments")
      .ThrowAsJavaScriptException();
}

void throwInvalidModifierException(const Napi::Env &env) {
  return Napi::TypeError::New(env, "argument modifier must be a number")
      .ThrowAsJavaScriptException();
}

void throwInvalidDelayException(const Napi::Env &env) {
  return Napi::TypeError::New(env, "argument delay must be a number")
      .ThrowAsJavaScriptException();
}