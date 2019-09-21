FROM ngqt/qode
WORKDIR /ng-test

# Install required deps
COPY install-deps.sh .

RUN ./install-deps.sh

ENTRYPOINT yarn install && /bin/bash