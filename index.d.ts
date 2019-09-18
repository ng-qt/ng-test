declare module '@ng-qt/qtest' {
  import { Key, KeyboardModifier, NodeWidget } from '@nodegui/nodegui';
  export function keyClick(widget: NodeWidget, key: Key, modifier?: KeyboardModifier, delay?: number): void;

  export function keyClicks(widget: NodeWidget, text: string, modifier?: KeyboardModifier, delay?: number): void;
}