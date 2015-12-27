FROM ubuntu:14.04.3
MAINTAINER Date Huang <tjjh89017@hotmail.com>

ENV PIN pin-2.14-71313-gcc.4.4.7-linux

RUN apt-get update
RUN apt-get install build-essential -y
RUN apt-get install cmake -y
RUN apt-get install python -y
RUN apt-get install python-dev -y
RUN apt-get install python-pip -y
RUN apt-get install git -y

# z3
WORKDIR /root
RUN git clone https://github.com/Z3Prover/z3.git
WORKDIR z3
RUN python scripts/mk_make.py
WORKDIR build
RUN make && make install

# boost
WORKDIR /
RUN apt-get install libboost-all-dev -y

# Pin & Triton
WORKDIR /root
COPY pin-2.14-71313-gcc.4.4.7-linux.tar.gz ./
RUN tar -xvf ${PIN}.tar.gz

RUN git clone https://github.com/JonathanSalwan/Triton.git ${PIN}/source/tools/Triton
RUN mkdir -p ${PIN}/source/tools/Triton/build

WORKDIR /root/${PIN}/source/tools/Triton/build
RUN cmake ..
RUN make

WORKDIR /root/${PIN}/source/tools/Triton/

CMD ["/bin/bash"]
