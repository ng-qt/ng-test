import { Key, KeyboardModifier, NodeWidget } from '@nodegui/nodegui';

export declare class NgTest {
  constructor(widget: NodeWidget): NgTest;

  keyClick(key: Key | string, modifier?: KeyboardModifier): void;

  keyPress(key: Key | string, modifier?: KeyboardModifier): void;

  // keyClicks(key: Key | string, modifier?: KeyboardModifier): void;
}