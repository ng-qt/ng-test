# ng-test
A test library for NodeGUI widgets

### Development
The recommended way of getting started with contributing is using [Docker](https://docker.com)

> If you already have Qt5 and Node.js installed on your system, and don't want to use [Docker](https://docker.com), go over to the [Docker image for Qode](https://github.com/ng-qt/qode-docker-image#environment) and set the same environment variables.

Run the following bash script to start the **ng-test** development environment for [Docker](https://docker.com)
> The project context will be shared with Docker, which means any changes made on your system, or in the container will be reflected to one another.
```
$ ./docker-dev.sh
```

Afterwards install the Node dependencies using Yarn
```
$ yarn install
```



#### Requirements
* [Docker](https://docker.com)
* [Qt5](https://doc.qt.io/qt-5/qt5-intro.html)
* [Node.js](https://nodejs.org)
