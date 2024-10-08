//
// Created by Graciela on 18-Sep-24.
//

#include "myStack.hpp"

#include <iostream>
#include <ostream>
#include <stack>
#include <string>

using namespace std;

// constructor to set top to -1
myStack::myStack() {
    index = -1;
}

// for member stack push
bool myStack::push(int a) {
    if (index < MAX_SIZE-1) {
        index++;
        stack[index] = a;
        cout << index << endl;
        return true;
    } else {
        cout << index << endl;
        return false;
    }
}

// member stack pop
void myStack::pop() {
    if (index > -1) {
        index--;
    }
}

// const member function
int myStack::top()const {
    if (index == -1) {
        return -1;
    } else {
        return stack[index];
    }
}

bool myStack::empty() {
    if (index == -1) return true;
    else return false;
}

bool myStack::full() {
    if (index == 9) return true;
    else return false;
}

string myStack::print()const {
    string s = "";
    cout << index << endl;
    if (index == -1) {
        // cout << "The stack is empty" << endl;
        s = "The stack is empty";
    } else {
        for (int i = 0; i < index; i++) {
            // cout << stack[i] << " ";
            s += to_string(stack[i]);
        }
    }

    cout << s + "\n";
    return s;
}

