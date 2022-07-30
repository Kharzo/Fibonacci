all: compile run

compile:
	@g++ -g -Wall Fib.cpp -o fib

run:
	@./fib