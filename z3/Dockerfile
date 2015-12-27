FROM ubuntu:14.04.3
MAINTAINER Date Huang <tjjh89017@hotmail.com>

RUN apt-get update
RUN apt-get install git -y
RUN apt-get install build-essential -y
RUN apt-get install python -y
RUN apt-get install ipython -y
RUN apt-get install python-dev -y
RUN apt-get install python-pip -y

WORKDIR /root
RUN git clone https://github.com/Z3Prover/z3.git

WORKDIR z3
RUN python scripts/mk_make.py

WORKDIR build
RUN make
RUN make install

CMD ["/bin/bash"]
