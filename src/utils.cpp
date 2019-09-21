#include "utils.h"
#include <napi.h>
#include <QWidget>

char toChar(const Napi::Value &value) {
  std::string str = value.As<Napi::String>().Utf8Value();
  return str[0];
}

int toInt(const Napi::Value &value) {
  return value.As<Napi::Number>().Int32Value();
}

QString toQString(const Napi::Value &value) {
  auto str = value.As<Napi::String>().Utf8Value();
  return QString::fromUtf8(str.c_str());
}

Qt::Key toKey(const Napi::Value &value) {
  int key = value.As<Napi::Number>().Int32Value();
  return static_cast<Qt::Key>(key);
}

Qt::KeyboardModifier toModifier(const Napi::Value &value) {
  int modifier = value.As<Napi::Number>().Int32Value();
  return static_cast<Qt::KeyboardModifier>(modifier);
}