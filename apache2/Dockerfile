FROM ubuntu:14.04.3
MAINTAINER Date Huang <tjjh89017@hotmail.com>

RUN apt-get update
RUN apt-get install apache2 -y

RUN echo "ServerName localhost" >> /etc/apache2/apache2.conf

COPY docker.html /var/www/html/

EXPOSE 80
CMD ["apachectl", "-D", "FOREGROUND"]
