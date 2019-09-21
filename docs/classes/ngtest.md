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

*Defined in [index.d.ts:3](https://github.com/ng-qt/ng-test/blob/b5e2458/index.d.ts#L3)*

Create a new simulation wrapper for widget

**Parameters:**

Name | Type |
------ | ------ |
`widget` | NodeWidget |

**Returns:** *[NgTest](ngtest.md)*

## Methods

###  keyClick

▸ **keyClick**(`key`: string, `modifier?`: KeyboardModifier): *void*

*Defined in [index.d.ts:13](https://github.com/ng-qt/ng-test/blob/b5e2458/index.d.ts#L13)*

Simulates clicking of key with an optional modifier

**`see`** [https://doc.qt.io/qt-5/qtest.html#keyClick](https://doc.qt.io/qt-5/qtest.html#keyClick)

**Parameters:**

Name | Type |
------ | ------ |
`key` | string |
`modifier?` | KeyboardModifier |

**Returns:** *void*

▸ **keyClick**(`key`: Key, `modifier?`: KeyboardModifier): *void*

*Defined in [index.d.ts:19](https://github.com/ng-qt/ng-test/blob/b5e2458/index.d.ts#L19)*

Simulates clicking of key with an optional modifier

**`see`** [https://doc.qt.io/qt-5/qtest.html#keyClick](https://doc.qt.io/qt-5/qtest.html#keyClick)

**Parameters:**

Name | Type |
------ | ------ |
`key` | Key |
`modifier?` | KeyboardModifier |

**Returns:** *void*

___

###  keyPress

▸ **keyPress**(`key`: string, `modifier?`: KeyboardModifier): *void*

*Defined in [index.d.ts:27](https://github.com/ng-qt/ng-test/blob/b5e2458/index.d.ts#L27)*

Simulates pressing a key with an optional modifier

**`see`** [https://doc.qt.io/qt-5/qtest.html#keyPress](https://doc.qt.io/qt-5/qtest.html#keyPress)

**`example`** [https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#25](https://github.com/ng-qt/ng-test/blob/master/src/ng-test.spec.ts#25)

**Parameters:**

Name | Type |
------ | ------ |
`key` | string |
`modifier?` | KeyboardModifier |

**Returns:** *void*

▸ **keyPress**(`key`: Key, `modifier?`: KeyboardModifier): *void*

*Defined in [index.d.ts:33](https://github.com/ng-qt/ng-test/blob/b5e2458/index.d.ts#L33)*

Simulates pressing a key with an optional modifier

**`see`** [https://doc.qt.io/qt-5/qtest.html#keyPress](https://doc.qt.io/qt-5/qtest.html#keyPress)

**Parameters:**

Name | Type |
------ | ------ |
`key` | Key |
`modifier?` | KeyboardModifier |

**Returns:** *void*
