import { Key, KeyboardModifier, NodeWidget } from '@nodegui/nodegui';

export declare class NgTest {
  /**
   * Create a new simulation wrapper for widget
   */
  constructor(widget: NodeWidget): NgTest;
  /**
   * Simulates clicking of key with an optional modifier
   *
   * @see {@link https://doc.qt.io/qt-5/qtest.html#keyClick}
   *
   * @example {@link https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#25}
   */
  keyClick(key: string, modifier?: KeyboardModifier): void;
  /**
   * Simulates clicking of key with an optional modifier
   *
   * @see {@link https://doc.qt.io/qt-5/qtest.html#keyClick}
   *
   * @example {@link https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#34}
   */
  keyClick(key: Key, modifier?: KeyboardModifier): void;
  /**
   * Simulates pressing a key with an optional modifier
   *
   * @see {@link https://doc.qt.io/qt-5/qtest.html#keyPress}
   *
   * @example {@link https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#45}
   */
  keyPress(key: string, modifier?: KeyboardModifier): void;
  /**
   * Simulates pressing a key with an optional modifier
   *
   * @see {@link https://doc.qt.io/qt-5/qtest.html#keyPress}
   *
   * @example {@link https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#54}
   */
  keyPress(key: Key, modifier?: KeyboardModifier): void;
}