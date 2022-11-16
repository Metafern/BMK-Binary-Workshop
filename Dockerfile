FROM --platform=linux/amd64 ubuntu:20.04

ARG USERNAME=pidgey

RUN apt-get -y update && apt-get install -y \
autoconf \
bison \
flex \
gcc \
tmux \
&& \
rm -rf /var/lib/apt/lists/*

RUN useradd ${USERNAME} && \
usermod -aG sudo ${USERNAME}

USER ${USERNAME}

ENTRYPOINT ["tail", "-f", "/dev/null"]