#include "PrinterQueue.h"

int main() {
    PrinterQueue printer;

    // Adding print requests to the queue
    printer.addRequest(PrintRequest("User1", 2));
    printer.addRequest(PrintRequest("User2", 1));
    printer.addRequest(PrintRequest("User3", 3));

    // Printing next request
    printer.printNextRequest();

    // Displaying statistics
    printer.displayStatistics();

    return 0;
}