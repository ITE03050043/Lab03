lab03.o:lab03.c
	gcc -c lab03.c
lab03:lab03.o
	gcc -o lab03 lab03.o
clean:
	rm *.o lab03
