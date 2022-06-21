.PHONY : all
all : parent child main

main : main.c parent.a child.a
	gcc -c main.c
	gcc -o main main.o parent.a child.a	
	
parent : parent.c
	gcc -c parent.c
	ar rs parent.a parent.o
	
child : child.c
	gcc -c child.c
	ar rs child.a child.o 
	
.PHONY : clean
clean :
	rm main
	rm *.o
	rm *.a
