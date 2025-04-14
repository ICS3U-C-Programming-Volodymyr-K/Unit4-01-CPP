// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved
// Created by: Volodymyr Kryzhanovskyi
// Created on: 03-14-2025
// This program calculates sum of numbers

#include <iostream>
#include <string>
// Declares the function
int main() {
    std::string number;
    // Defines the string number and then gets it from user
    std::cout << "Enter the number of how much loop will run.";
    std::cin >> number;
    // Defines three another important variables for the code.
    int sumNumber = 0;
    int loopRun = 0;
    int numberInt;
    // Catches any possible wrong input by try catch
    try {
        // Converts the number from user into integer and checks it
        numberInt = std::stoi(number);
        // Declares the message below if user entered negative number
        if (numberInt < 0) {
            std::cout << "Should be positive \n";
        }
        // While loop which runs amount of times to what user
        // entered and displays the calculation.
        while (loopRun <= numberInt) {
            sumNumber = sumNumber + loopRun;
            loopRun = loopRun + 1;
            std::cout << "The summ till " << number << " is "
            << sumNumber << std::endl;
        }
        // This statement pops up when the value is not integer.
    } catch (std::invalid_argument) {
        std::cout << "Enter the integer.\n";
    }
}
