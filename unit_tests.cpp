// //
// // Created by Graciela on 19-Sep-24.
// //
//
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "myStack.hpp"

TEST_CASE("A new stack is empty", "testTag1")
{
    myStack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("Pop an empty stack")
{
    myStack tester;
    tester.pop();
    REQUIRE(tester.top() == -1);
}

TEST_CASE("Pop an empty stack then add values")
{
    myStack tester;
    tester.pop();
    tester.push(1);
    REQUIRE(tester.top() == 1);
}

TEST_CASE("Push more than maximum stack amount check value of top of stack")
{
    myStack tester;
    for (int i = 0; i <= 12; i++) {
        tester.push(i);
    };
    REQUIRE(tester.top() == 9);
}

TEST_CASE("Check top value on empty stack")
{
    myStack tester;
    REQUIRE(tester.top() == -1);
}


TEST_CASE("Push X values pop Y values, check top for expected value")
{
    myStack tester;
    tester.push(3);
    tester.push(4);
    tester.push(2);
    tester.pop();
    tester.push(5);
    tester.pop();

    REQUIRE(tester.top() == 4);
}


TEST_CASE("Push exactly 10 values, check if stack is full and top value is expected value")
{
    myStack tester;
    for (int i = 0; i <= 10; i++) {
        tester.push(i);
    };

    tester.full();

    REQUIRE(tester.top() == 9);
    REQUIRE(tester.full() == true);
}
