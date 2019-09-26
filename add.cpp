// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program can add two integers together

#include <iostream>

int main() {
    // This function can add two integers together

    // Variables
    float first_integer;
    float second_integer;
    float sum;

    // Input
    std::cout << "Enter the first number to add (integer): " << std::endl;
    std::cin >> first_integer;
    std::cout << "" << std::endl;
    std::cout << "Enter the second number to add (integer): " << std::endl;
    std::cin >> second_integer;

    // Process
    sum = first_integer + second_integer;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The sum of your two integers is " << sum << std::endl;
    std::cout << "(" << first_integer << " + " << second_integer
    << " = " << sum << ")" << std::endl;
}
