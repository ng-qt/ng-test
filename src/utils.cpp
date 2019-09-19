#include "utils.h"
#include <napi.h>
#include <QWidget>

char strToChar(const Napi::Value &value) {
  std::string str = value.As<Napi::String>().Utf8Value();

  /*if (str.length() > 1) {
    return Napi::TypeError::New(env, "string must only contain a single character").ThrowAsJavaScriptException();
  }*/

  return str[0];
}

Qt::Key numToKey(const Napi::Value &value) {
  int key = value.As<Napi::Number>().Int32Value();
  return static_cast<Qt::Key>(key);
}