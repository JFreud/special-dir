all: dirs.c
	gcc -o dircheck dirs.c
clean:
	rm *~
	rm a.out
run: all
	./dircheck
