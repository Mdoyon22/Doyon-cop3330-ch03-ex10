/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Doyon
 */

#include "header.h"

using namespace std;


int main()
{
    string operation;
    double d1 = 0;
    double d2 = 0;
    double res = 0;

    cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two numbers\n";
    cin >> operation >> d1 >> d2;

    if (operation == "+" || operation == "plus")
            res = d1 + d2;

    else if (operation == "-" || operation == "minus")
            res = d1 - d2;

    else if (operation == "*" || operation == "mul")
            res = d1 * d2;

    else if (operation == "/" || operation == "div")
    {
        if (d2 == 0)
            operation = "divzero";

        else
            res = d1 / d2;
    }

    else
        operation = "unknown";

    if (operation == "unknown")
        cout << "I don't know this operator!\n";

    else if (operation == "divzero")
        cout << "No division by zero!\n";

    else
        cout << d1 << ' ' << operation << ' ' << d2 << " = " << res << '\n';

    return 0;
}