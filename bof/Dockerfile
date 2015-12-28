FROM ubuntu:14.04.3
MAINTAINER Date Huang <tjjh89017@hotmail.com>

RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd bof

COPY bof /etc/xinetd.d/

CMD ["xinetd", "-dontfork", "-f", "/etc/xinetd.conf"]
EXPOSE 5656
