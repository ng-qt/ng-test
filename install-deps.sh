#!/bin/bash
# hadolint ignore=DL3008,DL3007
apt-get update && apt-get install -y --no-install-recommends \
	clang \
	clang-tidy \
	clang-format