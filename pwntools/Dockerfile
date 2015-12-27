FROM ubuntu:14.04.3
MAINTAINER Date Huang <tjjh89017@hotmail.com>

RUN apt-get update
RUN apt-get install python -y
RUN apt-get install ipython -y
RUN apt-get install python-dev -y
RUN apt-get install python-pip -y

RUN pip install pwntools

RUN ["/bin/bash"]
