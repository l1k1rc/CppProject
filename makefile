simu: main.o Cashier.o Client.o Arrival.o Bank.o Departure.o Event.o Queue.o Simulation.o
	g++ -o simu main.o Cashier.o Client.o Arrival.o Bank.o Departure.o Event.o Queue.o Simulation.o
	
main.o: main.cpp Simulation.h
	g++ -Wall -c main.cpp
	
Bank.o: Bank.cpp Bank.h Cashier.h Queue.h
	g++ -Wall -c Bank.cpp
	
Arrival.o: Arrival.cpp Arrival.h Event.h poisson.h
	g++ -Wall -c Arrival.cpp
	
Cashier.o: Cashier.cpp Cashier.h Client.h Color.h
	g++ -Wall -c Cashier.cpp

Client.o: Client.cpp Client.h
	g++ -Wall -c Client.cpp

Departure.o: Departure.cpp Departure.h Event.h
	g++ -Wall -c Departure.cpp
	
Event.o: Event.cpp Event.h
	g++ -Wall -c Event.cpp
	
Queue.o: Queue.cpp Queue.h Client.h Color.h
	g++ -Wall -c Queue.cpp
	
Simulation.o: Simulation.cpp Simulation.h Color.h Bank.h poisson.h Arrival.h Departure.h
	g++ -Wall -c Simulation.cpp
	
clean:
	rm -f *~ *.o

mrproper: clean
	rm -f simu
