#include "BusStop.h"

BusStop::BusStop(bool isFinalStop, int capacity) {
    this->isFinalStop = isFinalStop;
    this->passengers = new int[capacity];
    this->passengerCount = 0;
    this->capacity = capacity;
}

void BusStop::addPassenger(int numPassengers) {
    for (int i = 0; i < numPassengers; ++i) {
        if (passengerCount < capacity) {
            passengers[passengerCount++] = 1;
        }
    }
}

void BusStop::removePassenger() {
    if (passengerCount > 0) {
        --passengerCount;
    }
}

int BusStop::getPassengerCount() {
    return passengerCount;
}