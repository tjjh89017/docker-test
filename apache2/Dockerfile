FROM ubuntu:14.04.3
MAINTAINER Date Huang <tjjh89017@hotmail.com>

RUN apt-get update
RUN apt-get install apache2 -y

ENV APACHE_RUN_USER     www-data
ENV APACHE_RUN_GROUP    www-data
ENV APACHE_LOG_DIR      /var/log/apache2
ENV APACHE_PID_FILE     /var/run/apache2.pid
ENV APACHE_RUN_DIR      /var/run/apache2
ENV APACHE_LOCK_DIR     /var/lock/apache2
ENV APACHE_LOG_DIR      /var/log/apache2

RUN echo "ServerName localhost" >> /etc/apache2/apache2.conf

COPY index.html /var/www/html/

EXPOSE 80
CMD ["/usr/sbin/apache2", "-D", "FOREGROUND"]
