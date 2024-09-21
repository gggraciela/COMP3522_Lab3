//
// Created by Graciela on 18-Sep-24.
//

#pragma once
#include <string>

using namespace std;

// store 10 to avoid magic number
constexpr int MAX_SIZE = 10;

class myStack {
    private:
        int index;
        int stack[MAX_SIZE];
    public:
        // for constructor
        myStack();
        // for member function
        bool push(int a);
        void pop();
        int top()const;
        bool empty();
        bool full();
        string print()const;
};
