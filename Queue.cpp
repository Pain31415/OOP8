#include "Queue.h"

template <typename T>
Queue<T>::Queue() : front(-1), rear(-1) {}

template <typename T>
bool Queue<T>::IsEmpty() {
    return front == -1;
}

template <typename T>
bool Queue<T>::IsFull() {
    return (rear + 1) % MAX_SIZE == front;
}

template <typename T>
void Queue<T>::Enqueue(T item) {
    if (IsFull()) {
        std::cout << "Queue is full. Cannot enqueue.\n";
        return;
    }

    if (IsEmpty()) {
        front = rear = 0;
    }
    else {
        rear = (rear + 1) % MAX_SIZE;
    }

    elements[rear] = item;
}

template <typename T>
T Queue<T>::Dequeue() {
    if (IsEmpty()) {
        std::cerr << "Queue is empty. Cannot dequeue.\n";
        throw std::out_of_range("Queue is empty");
    }

    T item = elements[front];

    if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % MAX_SIZE;
    }

    return item;
}

template <typename T>
void Queue<T>::Show() {
    if (IsEmpty()) {
        std::cout << "Queue is empty.\n";
        return;
    }

    int current = front;
    while (current != rear) {
        std::cout << elements[current] << " ";
        current = (current + 1) % MAX_SIZE;
    }

    std::cout << elements[rear] << "\n";
}

// Explicit instantiation of the template class
template class Queue<int>;