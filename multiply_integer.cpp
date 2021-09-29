// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to enter positive integer
// The program will add all the positive numbers up to the integer

#include <iostream>
#include <string>

int main() {
    // this tells the user the sum of
    // all the positive numbers from the integer

    std::string numberCount;
    int numberCountInt;
    int answer = 1;

    // input
    std::cout << "Please enter a positive integer: ";
    std::cin >> numberCount;
    std::cout << std::endl;

    // process & output

    try {
        numberCountInt = std::stoi(numberCount);
        do { answer = answer * numberCountInt;
            numberCountInt = numberCountInt - 1;
        }while (0 < numberCountInt); {
        }
        std::cout << "The answer of all positive numbers "
        << "is " << answer << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not a positive integer!";
    }

    std::cout << "\nDone." << std::endl;
}
