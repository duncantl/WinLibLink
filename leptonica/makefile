R="/c/Program Files/R/R-3.5.0/bin/R"

lept: lept.o
	gcc -o $@ lept.o -L/mingw64/lib -llept

%.o: %.c
	gcc -c -I/mingw64/include $<

Rlept.dll:
	$(R) CMD SHLIB Rlept.c
