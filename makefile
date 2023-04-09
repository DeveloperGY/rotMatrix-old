src = src/*.cpp
bin = bin
out = $(bin)/out
obj = ../obj/rotate.o ../obj/translate.o ../obj/helpers.o



make: library build run

build:
	g++ $(src) -o $(out) -L$(bin) -lrotMatrix

run:
	./$(out)

library:
	cd obj;\
	gcc -c ../src/rotMatrix/*.c -O2;\
	cd ../bin;\
	ar rcs librotMatrix.a $(obj);\
	cd ../;