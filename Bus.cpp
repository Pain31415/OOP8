#include "Bus.h"
#include <iostream>
#include <cstdlib> // for rand()

Bus::Bus(BusStop* stops, int numStops, int capacity) {
    this->stops = stops;
    this->numStops = numStops;
    this->capacity = capacity;
}

void Bus::simulate() {
    for (int i = 0; i < numStops; ++i) {
        int passengersBefore = stops[i].getPassengerCount();
        stops[i].addPassenger(rand() % 5);
        int passengersAfter = stops[i].getPassengerCount();

        std::cout << "Current time: " << i * 30 << std::endl;
        std::cout << "Passengers at the stop before: " << passengersBefore << std::endl;
        std::cout << "Passengers at the stop after: " << passengersAfter << std::endl;
        std::cout << "Bus capacity after: " << getPassengerCount() << std::endl;
        std::cout << std::endl;
    }
}

int Bus::getPassengerCount() {
    int totalPassengers = 0;
    for (int i = 0; i < numStops; ++i) {
        totalPassengers += stops[i].getPassengerCount();
    }
    return totalPassengers;
}

int Bus::getCapacity() {
    return capacity;
}