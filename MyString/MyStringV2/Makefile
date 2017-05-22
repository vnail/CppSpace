StringX:Main.o StringX.o
	g++ -g -o StringX Main.o StringX.o
Main.o:Main.cpp StringX.h
	g++ -g -c  Main.cpp
StringX.o:StringX.cpp StringX.h
	g++ -g -c StringX.cpp

clean:
	rm -rf Main.o StringX.o StringX
