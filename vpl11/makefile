all: exec

run: exec
	clear
	build/exec.exe

exec: src/main.cpp
	g++ -Iinclude -Wall src/main.cpp -o build/$@.exe

clean_linux:
	rm -rf build/*

clean:
	del /Q build\*