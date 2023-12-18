# Makefile for test

INCLUDE = /usr/include/X11
LIB = /usr/X11R6/lib
CC = gcc
CFLAGS = -lX11 -lpthread
TARGETS = test
OBJ = ${SRC:.c=.o}
SRC = test.c

$(TARGETS):${OBJ}
	${CC} -I ${INCLUDE} -L ${LIB} ${CFLAGS} ${OBJ} -o ${TARGETS}

${OBJ}:${SRC}
	${CC} ${SRC} -c -o ${OBJ}

clean: 
	rm -f *.o $(TARGETS)
 
