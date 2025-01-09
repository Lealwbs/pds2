all: exec

exec: main.o
	g++ -Wall -Ibuild build/main.o -o build/$@

main.o: src/main.cpp
	g++ -Wall -Ibuild -c src/main.cpp -o build/$@

clean_linux:
	rm -rf build/*

clean:
	del /Q build\*