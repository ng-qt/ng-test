FROM ngqt/qode
WORKDIR /ng-test

# Install required tools
# hadolint ignore=DL3008,DL3007
RUN apt-get update && apt-get install -y --no-install-recommends \
	cmake \
	clang \
	clang-tidy \
	clang-format

ENTRYPOINT yarn install && /bin/bash