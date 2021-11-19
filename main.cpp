/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */


#include <iostream>
using namespace std;
#include "operation.cpp"

int main() {
    double a, b, c;
    char operation;

    cin >> operation;
    cin >> a >> b;

    cout<<"= ";

    if (op(operation) == 1) {
        c = a + b;
        cout << c;
    }
    else if (op(operation) == 2) {
        c = a - b;
        cout << c;
    }
    else if (op(operation) == 3) {
        c = a * b;
        cout << c;
    }
    else if (op(operation) == 4) {
        c = a / b;
        cout << c;
    }
    else if(op(operation) == 5)
        cout << "invalid input";

    return 0;
}
