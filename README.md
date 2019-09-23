# ng-test
A test library for NodeGUI widgets

### Features
* [x] [keyClick](https://doc.qt.io/qt-5/qtest.html#keyClick)
* [x] [keyPress](https://doc.qt.io/qt-5/qtest.html#keyPress)
* [x] [keyClicks](https://doc.qt.io/qt-5/qtest.html#keyClicks)
* [ ] [keyRelease](https://doc.qt.io/qt-5/qtest.html#keyPress)
* [ ] [addColumn](https://doc.qt.io/qt-5/qtest.html#addColumn)
* [ ] [addRow](https://doc.qt.io/qt-5/qtest.html#addRow)
* [ ] [keyEvent](https://doc.qt.io/qt-5/qtest.html#keyEvent)
* [ ] [mouseClick](https://doc.qt.io/qt-5/qtest.html#mouseClick)
* [ ] [mouseMove](https://doc.qt.io/qt-5/qtest.html#mouseMove)
* [ ] [mousePress](https://doc.qt.io/qt-5/qtest.html#mousePress)
* [ ] [newRow](https://doc.qt.io/qt-5/qtest.html#newRow)
* [ ] [mouseRelease](https://doc.qt.io/qt-5/qtest.html#mouseRelease)
* [ ] [touchEvent](https://doc.qt.io/qt-5/qtest.html#touchEvent)

### Installation

### Usage
[API documentation](docs/classes/ngtest.md)

### Development
The recommended way of getting started with contributing is using [Docker](https://docker.com)

> If you already have QMake, Qt5, Node.js and CLang & friends installed on your system, and don't want to use [Docker](https://docker.com), go over to the [Docker image for Qode](https://github.com/ng-qt/qode-docker-image#environment) and set the same environment variables.

Run the following command to start the **ng-test** development environment for [Docker](https://docker.com) and install the required build dependencies
> The project context will be shared with Docker, which means any changes made on your system, or in the container will be reflected to one another.
```
$ ./docker-dev.sh
```

#### Requirements
* [Docker](https://docker.com)
* [Qt5](https://doc.qt.io/qt-5/qt5-intro.html)
* [Node.js](https://nodejs.org)
