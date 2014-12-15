all: test

test: test.o Boids.o Agent.o
	g++ test.o Boids.o Agent.o -o test

test.o: test.cpp
	g++ -c test.cpp -o test.o

Boids.o: Boids.h Boids.cpp
	g++ -c Boids.cpp -o Boids.o

Agent.o: Boids.h Agent.h Agent.cpp
	g++ -c Agent.cpp -o Agent.o

clean:
	rm *.o

mrproper: clean
	rm test

