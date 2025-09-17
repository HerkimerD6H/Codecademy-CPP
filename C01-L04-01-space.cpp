// Date File Added:   2025-09-17
// Platform:          Codecademy
// User Name:         @HerkimerD6H 
// Profile Link:      https://www.codecademy.com/profiles/HerkimerD6H
// Class:             Learn C++ (https://www.codecademy.com/enrolled/courses/learn-c-plus-plus)
// Lesson:            04 - Conditionals and Logic
// Project Name:      01 - Space
// Project File:      space.cpp
// Instructions:      Write a C++ program called space.cpp that calculates the fighting weight of an interplanetary fighter on other planets:
      // 1. Optional: Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.
      // Write a space.cpp program that helps him keep track of his target weight by:
      // It should ask him what his earth weight is.
      // Ask him to enter a number for the planet he wants to fight on.
      // It should then compute his weight on the destination planet.
      // Here is the table of conversion:
          // #	Planet	Relative Gravity
          // 1	Mercury	0.38
          // 2	Venus	0.91
          // 3	Mars	0.38
          // 4	Jupiter	2.34
          // 5	Saturn	1.06
          // 6	Uranus	0.92
          // 7	Neptune	1.19

//******** My Project Begins Here:************//

// include library
#include <iostream>

// main function
int main() {
  
  // declare and initalize variables
  // inputs: Earth Weight and planet choices
  // calculated values: Fight Weight, Feight Relative Gravity
  // constants: relative gravities
  double EarthWt = 0.0;
  int PlanetChoiceNum = 0;
  double FightWt = 0.0;
  double FightRG = 0.0;

  //declare constants (relative gravities)
  const double MercuryRG = 0.38;
  const double VenusRG = 0.91;
  const double MarsRG = 0.38;
  const double JupiterRG = 2.34;
  const double SaturnRG = 1.06;
  const double UranusRG = 0.92;
  const double NeptuneRG = 1.19;
  
  //ask for input Weight
  std::cout << "Hey, Little Mac! Let's get your fight set up! How much do you weigh right now (in pounds) on Earth?\n";

  //save input as EarthWt
  std::cin >> EarthWt;

  //ask for input Planet
  std::cout << "Thanks Mac! OK, which planet would you like to fight on? Here are your choices:\n 1 (Mercury) \n 2 (Venus) \n 3 (Mars) \n 4 (Jupiter) \n 5 (Saturn) \n 6 (Uranus)\n 7 (Neptune)\n";

  //save input as PlanetChoiceNum
  std::cin >> PlanetChoiceNum;

  //switch - Planet Choice selection is used to set FightRG to Planet RG
  switch (PlanetChoiceNum) {
    case 1: //Mercury
      FightRG = MercuryRG;
      break;
    case 2: //Venus
      FightRG = VenusRG;
      break;
    case 3: // Mars
      FightRG = MarsRG;
      break;
    case 4: // Jupiter
      FightRG = JupiterRG;
      break;
    case 5: // Saturn
      FightRG = SaturnRG;
      break;
    case 6: // Uranus
      FightRG = UranusRG;
    case 7: // Neptune
      FightRG = NeptuneRG;
      break;
    default: // Others
      std::cout << "Invalid choice\n";
      break;
  }

  //calculate FightWeight
  FeightWt = EarthWt * FightRG;
  
  //outputs here - include information and description to give a little context and summary
  std::cout << "\nOK, Little Mac! Here is your information for the fight!\n";
  std::cout << "\nYour Earth weight is: " << EarthWt ;
  std::cout << "\nYour fight planet choice number is: " << PlanetChoiceNum;
  std::cout << "\nThe relative gravity on your fight planet is: " << FightRG;
  std::cout << "\nSince you weigh " <<EarthWt << "pounds on Earth, your fighting weight on " << PlanetChoiceNum << " will be: " << FightWt << " pounds.\n";
  
}
