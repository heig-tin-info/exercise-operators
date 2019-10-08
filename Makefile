CSRCS=$(wildcard *.c)
COBJS=$(patsubst %.c,%.o,$(CSRCS))
EXEC=a.out

CFLAGS=-std=c99 -g -Wall
LDFLAGS=

all: build run

build: $(EXEC)

$(EXEC): $(CSRCS) | variables.h
	@echo -e '\e[1;34mCompilation...\e[m'
	$(CC) $(CFLAGS) $? -o $@ $(LDFLAGS)

run:
	./$(EXEC)

clean:
	@echo -e '\e[1;34mCleaning...\e[m'
	$(RM) $(EXEC) *.o

.PHONY: all build
