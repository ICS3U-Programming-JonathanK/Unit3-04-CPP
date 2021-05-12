// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: May 12 2021
// This program asks the user to type in an integer
// and tells the user if the integer is postive, negative or just zero


#include <iostream>

int main() {
  int num;

// get the user's integer
std::cout << " Enter an integer : ";
std::cin >> num;

// Check whether a number is positive, negative or zero
if(num > 0) {
  std::cout << " The number " << num << " is positive.";

} else if (num < 0) {
    std::cout << " The number " << num << " is negative.";

} else {
    std::cout << " The number " << num << " is just zero.\n\n";
}
  return 0;
}
