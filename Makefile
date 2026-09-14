CXX = g++
CXXFLAGS = -Wall -std=c++17

all: main.o Eventos.o GestorEventos.o
	$(CXX) $(CXXFLAGS) main.o GestorEventos.o Eventos.o -o main

main.o: main.cpp Eventos.h GestorEventos.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Eventos.o: Eventos.cpp Eventos.h
	$(CXX) $(CXXFLAGS) -c Eventos.cpp

GestorEventos.o: GestorEventos.cpp GestorEventos.h
	$(CXX) $(CXXFLAGS) -c GestorEventos.cpp

clean:
	rm -f *.o main
