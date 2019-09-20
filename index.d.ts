import { Key, KeyboardModifier, NodeWidget } from '@nodegui/nodegui';
import { NativeElement } from '@nodegui/nodegui/dist/lib/core/Component';

export declare class NgTest {
  constructor(native: NativeElement): NgTest;

  keyClick(key: Key | string, modifier?: KeyboardModifier): void;

  keyPress(key: Key | string, modifier?: KeyboardModifier): void;

  // keyClicks(key: Key | string, modifier?: KeyboardModifier): void;
}
