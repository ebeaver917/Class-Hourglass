hourglass: main.o hourglass.o
	g++ main.o hourglass.o

main.o: main.cpp hourglass.h
	g++ -c main.cpp

hourglass.o: hourglass.cpp hourglass.h
	g++ -c hourglass.cpp

clean:
	rm *.o a.out
