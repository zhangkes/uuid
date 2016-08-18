CC  = gcc
CFLAGS  = -g -Wall 
COMPILE = $(CC) $(CFLAGS) -c
BASE = ../base
LIBJSON = ../lib_json
LIBCGI = ../lib_cgi

OBJS = uuidneoabc
all:$(OBJS) 

uuidneoabc:../uuidneoabc.c 
	$(CC)  $(CFLAGS)   $^ -o $@

clean:
	rm -rf uuidneoabc