// Date File Added:   2025-09-17
// Platform:          Codecademy
// User Name:         @HerkimerD6H 
// Profile Link:      https://www.codecademy.com/profiles/HerkimerD6H
// Class:             Learn C++ (https://www.codecademy.com/enrolled/courses/learn-c-plus-plus)
// Lesson:            02 - Variables
// Project Name:      01 - Dog Years
// Project File:      dog_years.cpp
// Instructions:      Dog Years
    // "How old is your fuzzy friend in human years?"
    // Dogs mature at a faster rate than human beings. If you own a dog, you might’ve heard this rule: one year for Snoopy equals seven years for you. 
    // Turns out, the math isn’t that simple. Dogs mature more quickly than we do early on.
    // Here’s how we can convert your dog’s age into human years:
        // The first two years of a dog’s life count as 21 human years.
        // Each following year counts as 4 human years.
        // So a one-year-old dog is 10.5 years old in human years, and a two-year-old dog is 21 years old in human years… hmm this is about to get more complicated. 
        // Before you start doing the math in your head, let a computer take care of it!
    // Write a  C++ program called dog_years.cpp to calculate the age, in human years, of any dog older than 2.
  // Tasks 8/8 complete Mark the tasks as complete by checking them off
  // Creating the variables that we need:
    // 1. Declare an int variable named dog_age, and set it equal to your dog’s age as a number. Write a comment that explains this line of code Note: This version of the program is for dogs older than 2 years old.
    // 2. Let’s declare three more int variables:
        // early_years: for your dog’s first two years
        // later_years: for your dog’s following years
        // human_years: for your dog’s total human years
  // Solving for the human years:
    // 3. “The first two years of a dog’s life count as 21 human years.” Let’s give the variable early_years a value of 21. Write a comment that explains this line of code.
    // 4. “Each following year counts as 4 human years.” So the equation looks something like: later_years=(dog_age−2)∗4
        // Give the variable later_years a value of dog_age minus 2, and then multiply by 4. Write a comment that explains this line of code.
    // 5. Add early_years and later_years together, and store that in a variable named human_years. Write a comment that explains this line of code.
    // 6. Write a std::cout statement that displays your dog’s name and age in human years. Use chaining to display the value in the following sentence: My name is ____! Ruff ruff, I am [AGE] years old in human years.
        // You can fill in the blank with your dog’s name and [AGE] with the value of human_years in the sentence above.
    // 7. Compile and execute the code to make sure it’s bug-free!
    // Optional:
    // 8. Great work! You just converted a dog’s age to human years. Try changing dog_age and see what happens.
        // And now you might be wondering, how can you make this program work for puppies, too?
        // Well, you need to use something called a conditional to determine if the dog is younger than 2 and do something different if that’s true. This is covered in the next lesson!

//******** My Project Begins Here:************//

// include library
#include <iostream>

//main 
int main() {
  //declare and initialize variables
  int FirstTwoYears = 21;
  int TwoPlusYears = 4;
  int DogYears = 0;
  int HumanYears = 0;

  // ask for the input
  std::cout<< "Let's figure out how old your dog is in dog years! How many years old is your dog in human years?\n";
  std::cin>> HumanYears;
  
  // calculate age in dog years
  // have to do this calc here bc code runs top down
  // need the input first -> can't do it in the initializing because would need to re-run here with input value
  DogYears = 21 + 4*(HumanYears - 2);

  // print answer to screen
  std::cout<< "In dog years, your dog is: " << DogYears << " years old!\n";
  
}
