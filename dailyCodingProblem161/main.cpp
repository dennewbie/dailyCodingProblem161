//
//  main.cpp
//  dailyCodingProblem161
//
//  Created by Denny Caruso on 01/09/2020.
//  Copyright © 2020 Denny Caruso. All rights reserved.
//

/*
    Daily Coding Problem 161 - Level: Easy

    This problem was asked by Facebook.

    Given a 32-bit integer, return the number with its bits reversed.
    For example, given the binary number 1111 0000 1111 0000 1111 0000 1111 0000,
    return 0000 1111 0000 1111 0000 1111 0000 1111.
 
 */

#include <iostream>
#include <bitset>
#define SIZE 32

std::bitset<SIZE> getReversedBits(std::bitset<SIZE>);
int getNumber(void);

int main(int argc, const char * argv[]) {
    int usrNumber = getNumber();
    
    std::bitset<SIZE> bitsUsrNumber = usrNumber;
    std::bitset<SIZE> reversedBits = getReversedBits(bitsUsrNumber);

    std::cout << "Number: "<< usrNumber << "\nBits: \t\t\t" << bitsUsrNumber << "\nReversed Bits: \t" << reversedBits << "\n\n";
    return 0;
}

std::bitset<SIZE> getReversedBits(std::bitset<SIZE> bitsUsrNumber) {
    std::bitset<SIZE> reversedBits;
    int i, j;
    for (i = 0, j = SIZE - 1; ((i < (SIZE)) && (j >= (0))); i++, j--) reversedBits[j] = bitsUsrNumber[i];
    
    return reversedBits;
}

int getNumber(void) {
    int number;
    std::cout << "Insert an integer number: ";
    std::cin >> number;
    std::cout << "\n\n";
    
    return number;
}
