#ifndef PRIORITY_QUEUE_ELEMENT_H
#define PRIORITY_QUEUE_ELEMENT_H

template <typename T>
class PriorityQueueElement {
private:
    T value;
    int priority;

public:
    PriorityQueueElement(T val, int pri) : value(val), priority(pri) {}

    T getValue() const {
        return value;
    }

    int getPriority() const {
        return priority;
    }
};

#endif // PRIORITY_QUEUE_ELEMENT_H