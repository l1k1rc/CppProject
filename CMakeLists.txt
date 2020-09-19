cmake_minimum_required(VERSION 3.17)
project(CppProject2)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppProject2 Client.cpp main.cpp Client.h Bank.cpp Bank.h Cashier.cpp Cashier.h Queue.cpp Queue.h Simulation.cpp Simulation.h SED.cpp SED.h Event.cpp Event.h Departure.cpp Departure.h Arrival.cpp Arrival.h poisson.h)