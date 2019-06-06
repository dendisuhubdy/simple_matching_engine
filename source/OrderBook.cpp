#include "OrderBook.h"

//------------------------------------------------------------------------------
OrderBook::OrderBook() {}
//------------------------------------------------------------------------------
OrderBook::~OrderBook() {}
//------------------------------------------------------------------------------

#ifdef UNIT_TESTS
#include "catch.hpp"

TEST_CASE("OrderBook check")
{
    OrderBook ob;
    //some.set(5);
    //REQUIRE(some.get() == 5);
    //REQUIRE(some.get() != 2);
}

#endif
