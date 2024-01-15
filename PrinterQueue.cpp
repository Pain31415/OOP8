#include "PrinterQueue.h"

void PrinterQueue::addRequest(const PrintRequest& request) {
    printQueue.push(request);
}

void PrinterQueue::printNextRequest() {
    if (!printQueue.empty()) {
        PrintRequest currentRequest = printQueue.front();
        printQueue.pop();
        printHistory.push(currentRequest);

        std::cout << "Printing for user: " << currentRequest.getUser() << " | Priority: " << currentRequest.getPriority() << " | Time: " << currentRequest.getTime() << std::endl;
    }
    else {
        std::cout << "No print requests in the queue." << std::endl;
    }
}

void PrinterQueue::displayStatistics() {
    std::cout << "\nPrint History:\n";
    while (!printHistory.empty()) {
        PrintRequest currentRequest = printHistory.front();
        printHistory.pop();

        std::cout << "User: " << currentRequest.getUser() << " | Priority: " << currentRequest.getPriority() << " | Time: " << currentRequest.getTime() << std::endl;
    }
}