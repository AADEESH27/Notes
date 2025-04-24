#include "OrderBook.hpp"

int main()
{
    OrderBook b1(5, 10, 3);
    b1.printOrderQuality();
    OrderBook b2(b1);
    b2.printOrderQuality();
    return 0;
}