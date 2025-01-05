DIR = .\output
CFLAGS = -Wall -static

all: programa

programa: main.o teste.o
	g++ ${CFLAGS} -o ${DIR}/programa ${DIR}/main.o ${DIR}/teste.o

teste.o: teste.cpp
	g++ ${CFLAGS} -c teste.cpp -o ${DIR}/teste.o

main.o: main.cpp
	g++ ${CFLAGS} -c main.cpp -o ${DIR}/main.o

clean:
	del /Q ${DIR}\*

