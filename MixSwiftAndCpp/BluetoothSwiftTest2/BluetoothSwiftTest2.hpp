/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
The C++ API.
*/

#include <swift/bridging>

#pragma once

class FibonacciCalculatorCplusplus {
public:
    FibonacciCalculatorCplusplus(bool printInvocation);
    double fibonacci(double value);
    void callbackFunc();
private:
    bool printInvocation;
};
