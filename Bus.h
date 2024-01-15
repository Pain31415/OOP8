#ifndef BUS_H
#define BUS_H

#include "BusStop.h"

class Bus {
private:
    BusStop* stops;
    int numStops;
    int capacity;

public:
    Bus(BusStop* stops, int numStops, int capacity);

    void simulate();

    int getPassengerCount();
    int getCapacity();
};

#endif // BUS_H