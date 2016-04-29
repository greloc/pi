main:main.o p.o
	gcc main.o p.o -o main

main.o:main.c
	gcc -c main.c -o main.o

p.o:p.c
	gcc -c p.c -o p.o
