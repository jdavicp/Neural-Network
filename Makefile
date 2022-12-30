SOURCES := $(shell find . -name *.c)
FLAGS := -Wall -Wextra -pedantic -Wfloat-conversion -Werror -Wconversion -Wunreachable-code  -lm
BINARY := $(wildcard ./bin/*.c)
CURRENT_DIR := $(notdir $(shell pwd))

build:
	gcc $(SOURCES) -o ./bin/$(CURRENT_DIR) $(FLAGS) 
run:
	./bin/neural_network.exe

clear:
	rm -f $(BINARY)

debug:
	echo $(CURRENT_DIR)
