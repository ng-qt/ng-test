# ng-test
A test library for NodeGUI widgets

### Installation
The recommended way of getting started is by utilizing our [Qode image](https://github.com/ng-qt/qode-docker-image) for [Docker](https://docker.com), which will set up a completely development & testing ready environment for you to use.
> If you'd prefer not to use Docker, you'd need to specify the associated environment variables which can be found in the [environment section](https://github.com/ng-qt/qode-docker-image#environment) and install the dependencies specified in the prerequisites as well.

```sh
$ yarn add -D @ng-qt/ng-test
```

#### Prerequisites
* [Qt5](https://doc.qt.io/qt-5/qt5-intro.html)
* [Node.js](https://nodejs.org)
* [CMake](https://cmake.org)

### Usage
[API documentation](https://github.com/ng-qt/ng-test/docs/classes/ngtest.md)

#### Features
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

### Development
The recommended way of getting started with contributing is using [Docker](https://docker.com)

> If you already have QMake, Qt5, Node.js and CLang & friends installed on your system, and don't want to use [Docker](https://docker.com), go over to the [Docker image for Qode](https://github.com/ng-qt/qode-docker-image#environment) and set the same environment variables.

Run the following command to start the **ng-test** development environment for [Docker](https://docker.com) and install the required build dependencies
> The project context will be shared with Docker, which means any changes made on your system, or in the container will be reflected to one another.
```
$ ./docker-dev.sh
```
