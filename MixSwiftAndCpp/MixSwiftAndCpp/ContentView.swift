//
//  ContentView.swift
//  MixSwiftAndCpp
//
//  Created by medit on 10/31/24.
//

import SwiftUI
import BluetoothSwiftTest2

func fibonacci(_ value: Double) -> Double {
    return FibonacciCalculator(printInvocation: true).fibonacci(value)
}

struct FibonacciView: View {
    var body: some View {
        Text("Fibonacci(9) = \(fibonacci(9))")
    }
}

struct ContentView: View {
    var body: some View {
        VStack {
            FibonacciView()
        }
        .padding()
    }
}

#Preview {
    ContentView()
}
