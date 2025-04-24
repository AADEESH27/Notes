#include <iostream>
#include "OrderBook.hpp"

void OrderBook::printOrderQuality()
{
    std::cout << this->orderQuality << std::endl;
}

OrderBook::OrderBook()
{
    this->orderQuantity = 0;
    this->orderPrice = 0;
    this->orderQuality = 0;
}

OrderBook::OrderBook(int orderQuantitiy, int orderPrice, int orderQuality)
{
    this->orderQuantity = orderQuantitiy;
    this->orderPrice = orderPrice;
    this->orderQuality = orderQuality;
}

OrderBook::OrderBook(const OrderBook &obj)
{
    this->orderQuantity = obj.orderQuantity;
    this->orderPrice = obj.orderPrice;
    this->orderQuality = obj.orderQuality;
}