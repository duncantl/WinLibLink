R="/c/Program Files/R/R-3.5.0/bin/R"

tess: tess.o
	g++ -o $@ tess.o -L/mingw64/lib -ltesseract

%.o: %.cc
	g++ -I/mingw64/include -c $<

Rtess.dll:
	$(R) CMD SHLIB Rtess.c

clean:
	rm *.dll *.o tess.exe

