all: stringy.c
	gcc -o stringytest stringy.c
clean:
	rm *~
run: all
	./stringytest
