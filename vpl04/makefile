all: vpl_execution

vpl_execution: list.o main.o
	g++ build/list.o build/main.o -o build/vpl_execution.exe

list.o: src/list.cpp
	g++ -Iinclude -c src/list.cpp -o build/list.o

main.o: src/main.cpp
	g++ -Iinclude -c src/main.cpp -o build/main.o

clean_linux:
	rm -rf build vpl_execution

clean:
	del /Q build\*