[@ng-qt/qtest](../README.md) › [Globals](../globals.md) › [NgTest](ngtest.md)

# Class: NgTest

## Hierarchy

* **NgTest**

## Index

### Constructors

* [constructor](ngtest.md#constructor)

### Methods

* [keyClick](ngtest.md#keyclick)
* [keyPress](ngtest.md#keypress)

## Constructors

###  constructor

\+ **new NgTest**(`widget`: NodeWidget): *[NgTest](ngtest.md)*

*Defined in [index.d.ts:3](https://github.com/ng-qt/ng-test/blob/efec7ab/index.d.ts#L3)*

Create a new simulation wrapper for widget

**Parameters:**

Name | Type |
------ | ------ |
`widget` | NodeWidget |

**Returns:** *[NgTest](ngtest.md)*

## Methods

###  keyClick

▸ **keyClick**(`key`: string, `modifier?`: KeyboardModifier): *void*

*Defined in [index.d.ts:15](https://github.com/ng-qt/ng-test/blob/efec7ab/index.d.ts#L15)*

Simulates clicking of key with an optional modifier

**`see`** [https://doc.qt.io/qt-5/qtest.html#keyClick](https://doc.qt.io/qt-5/qtest.html#keyClick)

**`example`** [https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#25](https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#25)

**Parameters:**

Name | Type |
------ | ------ |
`key` | string |
`modifier?` | KeyboardModifier |

**Returns:** *void*

▸ **keyClick**(`key`: Key, `modifier?`: KeyboardModifier): *void*

*Defined in [index.d.ts:23](https://github.com/ng-qt/ng-test/blob/efec7ab/index.d.ts#L23)*

Simulates clicking of key with an optional modifier

**`see`** [https://doc.qt.io/qt-5/qtest.html#keyClick](https://doc.qt.io/qt-5/qtest.html#keyClick)

**`example`** [https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#34](https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#34)

**Parameters:**

Name | Type |
------ | ------ |
`key` | Key |
`modifier?` | KeyboardModifier |

**Returns:** *void*

___

###  keyPress

▸ **keyPress**(`key`: string, `modifier?`: KeyboardModifier): *void*

*Defined in [index.d.ts:31](https://github.com/ng-qt/ng-test/blob/efec7ab/index.d.ts#L31)*

Simulates pressing a key with an optional modifier

**`see`** [https://doc.qt.io/qt-5/qtest.html#keyPress](https://doc.qt.io/qt-5/qtest.html#keyPress)

**`example`** [https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#45](https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#45)

**Parameters:**

Name | Type |
------ | ------ |
`key` | string |
`modifier?` | KeyboardModifier |

**Returns:** *void*

▸ **keyPress**(`key`: Key, `modifier?`: KeyboardModifier): *void*

*Defined in [index.d.ts:39](https://github.com/ng-qt/ng-test/blob/efec7ab/index.d.ts#L39)*

Simulates pressing a key with an optional modifier

**`see`** [https://doc.qt.io/qt-5/qtest.html#keyPress](https://doc.qt.io/qt-5/qtest.html#keyPress)

**`example`** [https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#54](https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#54)

**Parameters:**

Name | Type |
------ | ------ |
`key` | Key |
`modifier?` | KeyboardModifier |

**Returns:** *void*
