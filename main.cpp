#include "Bus.h"
#include "BusStop.h"
#include <iostream>

int main() {
    const int numStops = 5;
    BusStop stops[numStops] = { BusStop(false, 10), BusStop(false, 10), BusStop(false, 10), BusStop(false, 10), BusStop(true, 10) };
    Bus bus(stops, numStops, 50);

    bus.simulate();

    return 0;
}