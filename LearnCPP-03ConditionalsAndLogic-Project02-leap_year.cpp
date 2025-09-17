// Date File Added:   2025-09-17
// Platform:          Codecademy
// User Name:         @HerkimerD6H 
// Profile Link:      https://www.codecademy.com/profiles/HerkimerD6H
// Class:             Learn C++ (https://www.codecademy.com/enrolled/courses/learn-c-plus-plus)
// Lesson:            03 - Conditionals and Variables
// Project Name:      02 - Leap Year
// Project File:      leap_year.cpp
      //Instructions
      // Optional: Let’s try a challenging problem that will put all your brain cells to the test.
      // Write a leap_year.cpp program that:
            // Takes a year as input.
            // Checks to see if the year is a four-digit number.
            // Displays whether or not the year falls on a leap year.
      // There are 3 criteria that must be taken into account to identify a leap year:
            // If the year can be evenly divided by 4 then it is a leap year, however…
            // If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
            // If that year is evenly divisible by 400, then it is a leap year.
      // Take some time to research and brainstorm before starting to write the code!

//******** My Project Begins Here:************//
// library
#include <iostream>

// main function
int main() {
  
  // declare and inital variables
  int YearInput = 0;
  bool IsDiv4 = false;
  bool IsDiv100 = false;
  bool IsDiv400 = false;
  bool IsLeapYear = false;
  double YearDiv4 = 0.0;
  double YearDiv100 = 0.0;
  double YearDiv400 = 0.0;
  int YearMod4 = 0;
  int YearMod100 = 0;
  int YearMod400 = 0;

  // ask the user for a year and store
  std::cout << "Let's figure out if a year is a leap year! Please enter a year to get started and we will check!\n";
  std::cin >> YearInput;

// not necessary for the function itself to work (can do with just %) but for demonstration later in output section
  YearDiv4 = YearInput / 4;
  YearDiv100 = YearInput / 100;
  YearDiv400 = YearInput / 400;

// if % is 0; it means that there is no remainder upon division and the year is evenly divisible by the divisor
  YearMod4 = YearInput%4;
  YearMod100 = YearInput%100;
  YearMod400 = YearInput%400;
      
// complete modulus calculations to see if year is evenly divisible for each divisor, set val to True if yes, keep False if no
  // check if divisible by 4
  if (YearInput%4 == 0) {
    IsDiv4 = true;
  }
      
 // check if divisible by 100
 if (YearInput%100 == 0) {
  IsDiv100 = true;
 }
      
// check if divisible by 400
if (YearInput%400 == 0) {
  IsDiv400 = true;
}

// if each modulus is 0 (all evenly divided), Leap Year is true, otherwise it is false
if (IsDiv4 == true && IsDiv100 == true && IsDiv400 == true) {
  IsLeapYear = true;
}

//output section
// first - statement if it is a leap year or not, and why (broadly - the three criteria that must be met)
if (IsLeapYear == true) {
    std::cout << YearInput << " is a leap year because it is evenly divided by 4, 100, and 400!\n";
}

else {
  std::cout << YearInput << "is not a leap year because it is not evenly divided by 4, 100, and 400!\n";
}
// second - a detailed explanation showing the math of why or why not it is a leap year for each individual criteria
  std::cout << "Here is the breakdown: \n"; 
  std::cout << YearInput << " div by 4 is: " << YearDiv4 << " remainder " << YearMod4 << "\n";
  std::cout << YearInput << " div by 100 is: " << YearDiv100 << " remainder " << YearMod100 << "\n";
  std::cout << YearInput << " div by 400 is: " << YearDiv400 << " remainder " << YearMod400 << "\n" ;
}
