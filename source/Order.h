#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

/**
 * Order description. This is a test class ment to show
 * how to create, build, use and document classes from other files.
 *
 * \warning beware, this is how warning looks like.
 */
class Order
{
    std::time_t timestamp_; // the timestamp of the order
    uint32_t side_; // the side of the order, buy or sell
    uint32_t price_; // the price of the order in unsigned int, cannot be negative
    uint32_t quantity_; // quantity of the order, cannot be negative
    std::string trader_; // trader hash for execution reporting
    std::string symbol_; // the symbol of the trade

    public:
        Order(std::time_t timestamp,
              uint32_t side,
              uint32_t price,
              uint32_t quantity,
              std::string trader,
              std::string symbol): timestamp_(timestamp), side_(side), price_(price),
                                   quantity_(quantity), trader_(trader),
                                   symbol_(symbol) {} // class initialization 
        std::string display();
        ~Order();
};
