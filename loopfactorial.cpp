// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: October 2019
// This program gets user to input their age with user input

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // inputs
    std::string integerAsString;
    int integerAsNumber = 0;
    int loopCounter = 0;
    int total = 1;

    std::cout << "Enter an integer?: ";
    std::cin >> integerAsString;

    try {
        integerAsNumber = std::stoi(integerAsString);
        do {
            std::cout <<" x" << loopCounter << std::endl;
            loopCounter = loopCounter + 1;
            total = total * loopCounter;
        } while (loopCounter < integerAsNumber);
        std::cout << "Your total is " << total << std::endl;
    } catch (std::invalid_argument) {
            std::cout << "Not a valid integer" << std::endl;
    }
}
