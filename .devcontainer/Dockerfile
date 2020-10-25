# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.134.0/containers/cpp/.devcontainer/base.Dockerfile
ARG VARIANT="buster"
FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-${VARIANT}

# Install JRE for Gradle
RUN apt-get update && \
  export DEBIAN_FRONTEND=noninteractive && \
  apt-get install -y --no-install-recommends \
    openjdk-11-jre-headless && \
  rm -rf /var/lib/apt/lists/*
