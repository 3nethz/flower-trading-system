#ifndef EXECUTIONREPORT_H
#define EXECUTIONREPORT_H

#include <string>
#include "Enums.h"

struct ExecutionReport
{
    std::string orderId;
    std::string clientOrderId;
    Instrument instrument;
    Side side;
    double price;
    int quantity;
    OrderStatus status;
    std::string reason;     
    std::string transactionTime;  // Format: YYYYMMDD-HHMMSS.sss
};

#endif