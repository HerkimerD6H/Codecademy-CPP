// Date File Added:   2025-09-17
// Platform:          Codecademy
// User Name:         @HerkimerD6H 
// Profile Link:      https://www.codecademy.com/profiles/HerkimerD6H
// Class:             Learn C++ (https://www.codecademy.com/enrolled/courses/learn-c-plus-plus)
// Lesson:            05 - Vectors
// Project Name:      02 - Review
// Project File:      review.cpp
// Instructions:      Write a program to find the sum of even numbers and the product of odd numbers in a vector.

//******** My Project Begins Here:************//

//libraries
#include <iostream>
#include <vector>

int main () {


//variables declare and initialize
int evenSum = 0; // sum of all even numbers
int oddProduct = 1; // product of all odd numbers
int i = 0; // counter
int j = 0; // counter

// we will show the math for each step as a way to check ourselves
// vector will have six elements
std::vector<int> num(6);

// using Fibonacci because I can!
num[0] = 1;
num[1] = 1;
num[2] = 2;
num[3] = 3;
num[4] = 5;
num[5] = 8;

// printing out the beginning even sum and odd product values, as well as the vector elements
std::cout<< "\nBEGINNING:\nEven Sum Identity Element: " << evenSum << "\nOdd Product Identity Element: " << oddProduct;
std::cout<< "\nElements: ";
// print out the vector elements
for (j = 0; j < num.size(); j++) {
  std::cout << num[j] << " | ";
}

//for each element: if the number is odd - complete odd product and print to screen
for (i = 0; i < num.size(); i++) {
  if (num[i]%2 == 1) { // using %2 to determine if odd
    oddProduct = oddProduct * num[i];
    std::cout << "\nIteration " << i+1 << ": " << num[i] << " is odd. Odd Product now = " << oddProduct;
  }

//for each element: if the number is even - complete even sum and print to screen
  else {
    evenSum = evenSum + num[i];
    std::cout << "\nIteration " << i+1 << ": " << num[i] << " is even. Even Sum now = " << evenSum;
  }
