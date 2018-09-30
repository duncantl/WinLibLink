
libmatt.a: libroutine.o
	ar cr $@ $^

%.o: %.c
	gcc -c $< -I.

check: check.o libmatt.a
	gcc -o $@ check.o -L. -lmatt

check2: libroutine.o check.o
	gcc -o $@ $^
