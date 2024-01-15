#ifndef PRINTER_QUEUE_H
#define PRINTER_QUEUE_H

#include <queue>
#include <iostream>
#include <ctime>
#include <string>

class PrintRequest {
public:
    PrintRequest(const std::string& user, int priority) : user(user), priority(priority) {}

    std::string getUser() const { return user; }
    int getPriority() const { return priority; }
    time_t getTime() const { return requestTime; }

private:
    std::string user;
    int priority;
    time_t requestTime = std::time(0);
};

class PrinterQueue {
public:
    void addRequest(const PrintRequest& request);
    void printNextRequest();
    void displayStatistics();

private:
    std::queue<PrintRequest> printQueue;
    std::queue<PrintRequest> printHistory;
};

#endif // PRINTER_QUEUE_H