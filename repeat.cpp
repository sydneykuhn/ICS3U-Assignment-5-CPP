// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program print the users string using a loop

#include <iostream>
#include <string>

int main() {
    // this function has a loop
    std::string userString;
    std::string timesRepeatedAsString;
    int timesRepeated;
    // this is to keep track of the loop
    int loopCounter = 0;

    // input
    std::cout << "Enter a string (ex. hello) : ";
    std::cin >> userString;
    std::cout << "How many time you would like it to repeat : ";
    std::cin >> timesRepeatedAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        timesRepeated = std::stoi(timesRepeatedAsString);
        if (timesRepeated > 0) {
            for (loopCounter = 0; loopCounter < timesRepeated; loopCounter++) {
                if (loopCounter % timesRepeated == timesRepeated) {
                    std::cout << "" << userString;
                } else {
                    std::cout << userString;
                }
            }
        } else {
            std::cout << "Negative integer entered, please try again."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer entered, please try again." << std::endl;
    }

    std::cout << "\n\nDone." << std::endl;
}
