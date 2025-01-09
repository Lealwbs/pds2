all: exec

run: all
	build/exec.exe

exec: src/main.cpp
	g++ -Iinclude -Wall src/main.cpp -o build/exec

clean_linux:
	rm -rf build/*
clean:
	del /Q build\*

