FROM ngqt/qode
WORKDIR /ng-test

# Install required deps
RUN ./install-deps.sh

ENTRYPOINT yarn install && /bin/bash