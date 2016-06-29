CC=gcc # compiler
CFLAGS=-I. # flags to pass to compiler
DEPS = factorial.h # space-separated list of headers the .c files depend on

%.o: %.c $(DEPS) # rule for .o files, .o depends on .c and .h . DEPS
	$(CC) -c -o $@ $< $(CFLAGS) # -c means make object file from .c file, $@ says name it "%.o"

factorial.out: main.o factorial.o
	$(CC) -o factorial.out main.o factorial.o -I.

