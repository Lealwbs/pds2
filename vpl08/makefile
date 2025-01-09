all: exec

run: exec
	build/exec.exe

exec: src/main.cpp
	g++ -Iinclude -Wall src/main.cpp -o build/exec.exe

clean-linux:
	rm -rf build/*

clean:
	del /Q build\*