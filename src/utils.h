#include <QTest>
#include <napi.h>

char strToChar(const Napi::Value &value);

Qt::Key numToKey(const Napi::Value &value);