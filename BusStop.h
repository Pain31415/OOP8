#ifndef BUSSTOP_H
#define BUSSTOP_H

class BusStop {
private:
    bool isFinalStop;
    int* passengers;
    int passengerCount;
    int capacity;

public:
    BusStop(bool isFinalStop, int capacity);

    void addPassenger(int numPassengers);
    void removePassenger();

    int getPassengerCount();
};

#endif // BUSSTOP_H