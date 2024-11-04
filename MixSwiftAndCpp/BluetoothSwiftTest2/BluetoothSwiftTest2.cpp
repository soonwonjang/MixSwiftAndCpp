/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
Implements the C++ API.
*/

#include "BluetoothSwiftTest2.hpp"
#include <BluetoothSwiftTest2-Swift.h>
//#include <Fibonacci/Fibonacci-Swift.h>
#include <iostream>

FibonacciCalculatorCplusplus::FibonacciCalculatorCplusplus(bool printInvocation) : printInvocation(printInvocation) {}

double FibonacciCalculatorCplusplus::fibonacci(double value) {
    // Print the value if applicable.
    if (printInvocation)
        std::cout << "[c++] fibonacci(" << value << ")\n";
    
    // Handle the base case of the recursion.
    if (value <= 1.0)
        return 1.0;
    
    // Create the Swift `FibonacciCalculator` structure and invoke its `fibonacci` method.
    auto swiftCalculator = BluetoothSwiftTest2::FibonacciCalculator::init(printInvocation);
    
    swiftCalculator.setCallback();
    
    return swiftCalculator.fibonacci(value - 1.0) + swiftCalculator.fibonacci(value - 2.0);
}
