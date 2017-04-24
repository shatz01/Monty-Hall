#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// I wrote this because I had a lot of trouble with the monty hall problem
// After writing it in code, I finally understand it.

int main () {

int i = 0;
double failure = 0;
double success = 0;

//this seeds the randomizer, otherwise we would just get the same random nums
srand(time(NULL));

while (i < 1000)
{

  int doorIchoseFirst = rand() % 3;         // v1 in the range 1 to 3
  int doorWithCar = rand() % 3;

  if(doorIchoseFirst == doorWithCar)
  {
    failure++;
  }else if(doorIchoseFirst != doorWithCar)
  {
    success++;
  }
  i++;
}

float winToLoss = success/10;

std::cout << "Number of wins: " << success << std::endl;
std::cout << "Number of losses: " << failure << std::endl;
std::cout << std::fixed << "Pecent of wins: " <<  std::setprecision(2) << winToLoss << "%" <<std::endl;



  return 0;
}
