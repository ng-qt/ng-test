import { Key, QWidget, QWidgetEvents } from '@nodegui/nodegui';
import { NgTest } from '../index';

describe('NgTest', () => {
  let ngTest: NgTest;
  let widget: QWidget;

  beforeEach(() => {
    widget = new QWidget();
    ngTest = new NgTest(widget);
  });

  describe('constructor', () => {
    it(`should throw an error if argument isn't an instance of NodeWidget`, () => {
      // @ts-ignore
      expect(() => new NgTest()).toThrow('Expected an instance of NodeWidget');
    });

    it('should not throw an error when providing an instance of NodeWidget as argument', () => {
      expect(() => new NgTest(new QWidget())).not.toThrow();
    });
  });

  describe('keyPress', () => {
    it('should call with character', () => {
      const widget = new QWidget();
      const ngTest = new NgTest(widget);

      const spy = jest.fn();

      widget.addEventListener(QWidgetEvents.KeyPress, spy);

      ngTest.keyPress('a');
      expect(spy).toHaveBeenCalled();
    });
  });

  /*describe('keyClick', () => {
    let ngTest: NgTest;
    let widget: QWidget;

    beforeEach(() => {
      widget = new QWidget();
      ngTest = new NgTest(widget);
    });

    it('should call', (done) => {
      widget.addEventListener(QWidgetEvents.MouseButtonDblClick, (event) => {
        const keyEvent = new QKeyEvent(event);
        console.log('YES');
        done();
      });

      ngTest.keyClick(Key.Key_0);
    });
  });*/
});
