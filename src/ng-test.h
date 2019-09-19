#include <QWidget>
#include <napi.h>

class NgTest : public Napi::ObjectWrap<NgTest> {
  private:
    static Napi::FunctionReference constructor;

  public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports);
    NgTest(const Napi::CallbackInfo &info);

  QWidget *_widget;

  void KeyClick(const Napi::CallbackInfo &info);

  void KeyPress(const Napi::CallbackInfo &info);
};