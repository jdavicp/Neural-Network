sources := ./src/cmd/main.c ./src/core/gradient_descent/gradient.c ./src/core/numerical_derivative/derivatives.c
FLAGS := -Wall -Wextra -pedantic -Wfloat-conversion -Werror -Wconversion -Wunreachable-code  -lm
binary := $(wildcard bin/*.exe)
build:
	clang $(sources) -o $(binary) $(FLAGS) 
run:
	./bin/neural_network.exe

clear:
	del \f $(binary)
