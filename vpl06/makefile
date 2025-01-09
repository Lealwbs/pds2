all: exec

exec: main.o aluno.o
	g++ -Wall build/main.o build/aluno.o -o build/$@

main.o: src/main.cpp
	g++ -Wall -Iinclude -c src/main.cpp -o build/$@

aluno.o: src/aluno.cpp
	g++ -Wall -Iinclude -c src/aluno.cpp -o build/$@

clean_linux:
	rm -rf build/*

clean:
	del /Q build\*