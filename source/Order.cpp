#include "Order.h"

//------------------------------------------------------------------------------
Order::~Order() {}
//------------------------------------------------------------------------------

std::string Order::display()
{
    std::string order_str = std::to_string(timestamp_)
                   + " " + std::to_string(side_)
                   + " " + std::to_string(price_)
                   + " " + std::to_string(quantity_)
                   + " " + trader_
                   + " " + symbol_;
    return order_str;
}


#ifdef UNIT_TESTS
#include "catch.hpp"

TEST_CASE("Order initialization")
{
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t timestamp = std::chrono::system_clock::to_time_t(now);
    uint32_t side = 0; // buy
    uint32_t price = 7700;
    uint32_t quantity = 2;
    std::string trader = "hduihas8923ndsa";
    std::string symbol = "BTCUSD";
    Order order(timestamp, side, price, quantity, trader, symbol);
    std::string order_str = "1559816945 0 7700 2 hduihas8923ndsa BTCUSD";
    REQUIRE(order.display() == order_str);
}

#endif
