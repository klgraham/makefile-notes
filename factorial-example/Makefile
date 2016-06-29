CC=gcc # compiler
CFLAGS=-I. # flags to pass to compiler
DEPS = factorial.h # list of headers the .c files depend on
OBJ = main.o factorial.o # list of object files

%.o: %.c $(DEPS) # rule for .o files, .o depends on .c and .h . DEPS
	$(CC) -c -o $@ $< $(CFLAGS) # -c means make object file from .c file, $@ says name it "%.o"

factorial.out: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

