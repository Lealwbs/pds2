all: exec

run: exec
	clear
	build/exec.exe

exec: main.o heapint.o
	g++ build/main.o build/heapint.o -o build/$@.exe

main.o: src/main.cpp
	g++ -Iinclude -Wall -c src/main.cpp -o build/$@

heapint.o: src/HeapInt.cpp include/HeapInt.hpp
	g++ -Iinclude -Wall -c src/HeapInt.cpp -o build/$@

clean_linux:
	rm -rf build/*

clean: 
	del /Q build\*

