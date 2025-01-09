all: exec

run: exec
	build/exec.exe

exec: src/main.cpp include/vetor.hpp
	clear
	g++ -Iinclude src/main.cpp include/vetor.hpp -o build/exec.exe

clean_linux:
	rm -rf build/*

clean:
	del /Q build\*
