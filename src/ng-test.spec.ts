import { Key, KeyboardModifier, QKeyEvent, QWidget, QWidgetEvents } from '@nodegui/nodegui';
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

  describe('keyClick', () => {
    it('should fire KeyPress event with character', () => {
      widget.addEventListener(QWidgetEvents.KeyPress, (e) => {
        const text = new QKeyEvent(e).text();
        expect(text).toEqual('a');
      });

      ngTest.keyClick('a');
    });

    it('should fire KeyPress event with key', () => {
      widget.addEventListener(QWidgetEvents.KeyPress, (e) => {
        const text = new QKeyEvent(e).text();
        expect(text).toEqual(Key.Key_1);
      });

      ngTest.keyClick(Key.Key_0);
    });
  });

  describe('keyPress', () => {
    it('should fire KeyPress event with character', () => {
      widget.addEventListener(QWidgetEvents.KeyPress, (e) => {
        const text = new QKeyEvent(e).text();
        expect(text).toEqual('b');
      });

      ngTest.keyPress('b');
    });

    it('should fire KeyPress event with key', () => {
      widget.addEventListener(QWidgetEvents.KeyPress, (e) => {
        const text = new QKeyEvent(e).text();
        expect(text).toEqual(Key.Key_1);
      });

      ngTest.keyPress(Key.Key_1);
    });
  });

  describe('keyClicks', () => {
    let handler: jest.Mock;
    let sequence: string;

    beforeEach(() => {
      handler = jest.fn();
      widget.addEventListener(QWidgetEvents.KeyPress, handler);
      sequence = 'ng-test';
    });

    it('should fire a sequence of key clicks instantly', () => {
      ngTest.keyClicks(sequence);

      expect(handler).toHaveBeenCalledTimes(sequence.length);
    });

    // TODO: This actually blocks the thread when it shouldn't
    /*it('should fire a sequence of key clicks with delay in between', (done) => {
      const delay = 50;

      ngTest.keyClicks(sequence, KeyboardModifier.NoModifier, delay);

      expect(handler).not.toHaveBeenCalled();

      setTimeout(() => {
        expect(handler).toHaveBeenCalledTimes(sequence.length);
        done();
      }, sequence.length * delay);
    });*/
  });
});
