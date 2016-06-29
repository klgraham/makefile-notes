CC=gcc 
CFLAGS=-I. -O3

binomial.out: main.o factorial.o binomial.o
	$(CC) -o binomial.out main.o factorial.o binomial.o $(CFLAGS)
	
factorial.o: factorial.c
	$(CC) -c factorial.c -o factorial.o $(CFLAGS)
	
binomial.o: binomial.c factorial.h
	$(CC) -c binomial.c -o binomial.o $(CFLAGS)

main.o: main.c binomial.h
	$(CC) -c main.c -o main.o $(CFLAGS)
	
clean:
	rm *.o binomial.out