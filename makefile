all: printstruct.o main.o
	gcc -o testprogram printstruct.o main.o

printstruct.o: printstruct.c struct.h
	gcc -c printstruct.c

main.o: main.c struct.h
	gcc -c main.c

clean:
	rm *.o

run: testprogram
	./testprogram
