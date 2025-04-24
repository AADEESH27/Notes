#ifndef ORDERBOOK_HPP
#define ORDERBOOK_HPP

class OrderBook
{
private:
    int orderQuantity;

protected:
    int orderPrice;

public:
    int orderQuality;
    void printOrderQuality();
    OrderBook();
    OrderBook(int orderQuantitiy, int orderPrice, int orderQuality);
    OrderBook(const OrderBook &obj);
};

#endif