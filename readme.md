# Batman's Kitchen Binary Exploitation Workshop

This repository contains a docker container pre-configured for linux x86-64 binary exploitation.

## Usage:
Clone this repository locally on your machine and run `docker compose up`.
The `shared` folder is a bind mount between the host and container. Any files updated there will be reflected real-time in the container.

This container utilizes [tmux](https://github.com/tmux/tmux/wiki) for easy window splitting.
Key shortcuts:
- split horizontal: `ctrl + b` , `"`
- split vertical: `ctrl + b` , `%`
- change context: `ctrl + b` , `o`

## Todo:
- Add gdb
- Add python3 + pwntools
- Configure test webpage (flask?)
- Add sudo