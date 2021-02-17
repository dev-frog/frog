CC = gcc
CFLAGS = -c -std=c99 -g
LDFAGS = -g 
SRC = ${wildcard src/*.c}
HDR = ${wildcard include/*.h}
OBJ = ${SRC:.c=.o}
EXEC = frog
all: ${SRC} ${OBJ} ${EXEC}
${EXEC}: ${OBJ}
	${CC} ${LDFAGS} $^ -o $@

%.o: %.c ${HDR}
	${CC} ${CFLAGS} $< -o $@

clean:
	rm src/*.o ${EXEC}