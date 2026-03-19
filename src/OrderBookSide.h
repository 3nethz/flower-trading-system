#ifndef ORDERBOOKSIDE_H
#define ORDERBOOKSIDE_H

#include <string>
#include <map>
#include <deque>
#include "order.h"

struct PriceComparator {
    bool isBuySide;
    bool operator()(double a, double b) const {
        return isBuySide ? a > b : a < b;
    }
};

class OrderBookSide {
private:
    bool isBuySide;
    std::map<double, std::deque<Order>, PriceComparator> orders;
public:
    OrderBookSide(bool isBuySide) 
        : isBuySide(isBuySide), orders(PriceComparator{isBuySide}) {}
        
    
    void insertOrder(const Order& order);
    Order getBestOrder() const;
    void removeTopOrder();
};

#endif