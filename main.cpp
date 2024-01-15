#include "Queue.h"

int main() {
    Queue<int> myQueue;

    std::cout << "Is Queue Empty? " << (myQueue.IsEmpty() ? "Yes" : "No") << "\n";

    myQueue.Enqueue(10);
    myQueue.Enqueue(20);
    myQueue.Enqueue(30);
    myQueue.Enqueue(40);
    myQueue.Enqueue(50);

    std::cout << "Queue elements: ";
    myQueue.Show();

    std::cout << "Is Queue Full? " << (myQueue.IsFull() ? "Yes" : "No") << "\n";

    int dequeuedItem = myQueue.Dequeue();
    std::cout << "Dequeued item: " << dequeuedItem << "\n";

    std::cout << "Queue elements after dequeue: ";
    myQueue.Show();

    return 0;
}