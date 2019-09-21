#include <QTest>
#include <QWidget>
#include <napi.h>

char toChar(const Napi::Value &value);

int toInt(const Napi::Value &value);

QString toQString(const Napi::Value &value);

Qt::Key toKey(const Napi::Value &value);

Qt::KeyboardModifier toModifier(const Napi::Value &value);