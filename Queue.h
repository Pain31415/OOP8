#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

template <typename T>
class Queue {
private:
    static const int MAX_SIZE = 100;
    T elements[MAX_SIZE];
    int front;
    int rear;

public:
    Queue();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(T item);
    T Dequeue();
    void Show();
};

#endif // QUEUE_H