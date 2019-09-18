import { Key, QWidget } from '@nodegui/nodegui';
// @ts-ignore
import { keyClick } from '../index';

describe('NgTest', () => {
  describe('keyClick', () => {
    it('should call', () => {
      const node = new QWidget();

      // node.native.subscribeToQtEvent(Key.Key_P);

      keyClick(node, Key.Key_P);
    });
  });
});