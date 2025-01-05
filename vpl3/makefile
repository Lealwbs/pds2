all: exec

exec: main.o onibus.o empresa.o
	g++ build/main.o build/onibus.o build/empresa.o -o build/exec.exe

main.o: src/main.cpp
	g++ -Iinclude -c src/main.cpp -o build/$@

empresa.o: src/empresa.cpp
	g++ -Iinclude -c src/empresa.cpp -o build/$@

onibus.o: src/onibus.cpp
	g++ -Iinclude -c src/onibus.cpp -o build/$@

clean_linux:
	rm -rf build/*

clean:
	del /Q build\*