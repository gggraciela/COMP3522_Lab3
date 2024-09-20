//
// Created by Graciela on 19-Sep-24.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp
#include "catch.hpp"
#include "myStack.hpp"

TEST_CASE("A new stack is empty", "testTag1")
{
    myStack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}