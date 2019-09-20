import { NodeWidget, Key, KeyboardModifier } from '@nodegui/nodegui';
import { NativeElement } from '@nodegui/nodegui/dist/lib/core/Component';
const addon = require('./build/Release/NgTest.node');

export class NgTest {
  native: NativeElement;
  constructor(widget: NodeWidget) {
    if (!widget) {
      throw new Error('A Widget instance is required');
    }
    this.native = new addon.NgTest(widget.native);
  }
  keyClick(key: Key | string, modifier?: KeyboardModifier) {
    this.native.keyClick(key, modifier);
  }
  keyPress(key: Key | string, modifier?: KeyboardModifier) {
    this.native.keyPress(key, modifier);
  }
}
