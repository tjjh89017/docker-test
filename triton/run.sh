#!/bin/sh

docker run -i -t --cap-add=SYS_PTRACE --security-opt apparmor:unconfined triton /bin/bash
