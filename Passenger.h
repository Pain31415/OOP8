#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
private:
    int count;

public:
    Passenger(int count);
    int getCount() const;
};

#endif // PASSENGER_H