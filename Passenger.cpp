#include "Passenger.h"

Passenger::Passenger(int count)
    : count(count) {}

int Passenger::getCount() const {
    return count;
}