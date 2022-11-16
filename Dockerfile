FROM --platform=linux/amd64 ubuntu:20.04

ARG USERNAME=pidgey

RUN apt-get -y update && apt-get install -y \
autoconf \
bison \
flex \
gcc \
tmux \
sudo \
software-properties-common && \
add-apt-repository ppa:deadsnakes/ppa && \
rm -rf /var/lib/apt/lists/*

RUN pip3 install pwntools

RUN useradd ${USERNAME} && \
usermod -aG sudo ${USERNAME}

USER ${USERNAME}

ENTRYPOINT ["tail", "-f", "/dev/null"]