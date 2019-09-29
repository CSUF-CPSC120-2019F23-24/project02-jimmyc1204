// Name: Jimmy Cruz
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <string.h>


int main()
{
  double days, hotel, meal, total;
  std::stringstream sshotel, ssmeal, sstotal;

  std::cout << "Welcome to the Business Trip Tracker!" << '\n';
  std::cout << "" << '\n';

  //allows multiple words to be input
  std::string location;
  std::cout << "What is the business trip location?" << '\n';
  getline(std::cin,location);

  std::cout << "How many days will the trip take?" << '\n';
  std::cin >> days;

  std::cout << "What is the hotel expense?" << '\n';
  std::cin >> hotel;

  std::cout << "What is the total meal expense?" << '\n';
  std::cin >> meal;

  //calculate
  total = hotel + meal;


  //display
  //column 1
  std::cout << std::setw(0) << "Location"
  <<std::setw(9) << "Days"
  <<std::setw(12) << "Hotel"
  <<std::setw(15) << "Meal"
  <<std::setw(17) << "Total" << '\n';

  //include $ sign
  sshotel << std::setprecision(2) << std::fixed << '$' << hotel;
  ssmeal << std::setprecision(2) << std::fixed << '$' << meal;
  sstotal << std::setprecision(2) << std::fixed << '$' << total;


  //column 2
  std::cout << std::setw(0) << location
  <<std::setw(9) << days
  <<std::setw(10) << '$' << hotel
  <<std::setw(13) << '$' << meal
  <<std::setw(13) << '$' << total << '\n';

  return 0;
}
