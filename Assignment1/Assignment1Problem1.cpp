
#include<iostream>
using namespace std;

int main(int argc, char **argv){
  //initialize variables
  float weightInOunces = 0;
  float weightInTons = 0;
  float boxesForTon = 0;
//storing value of
  float convertToOunces = 35273.92;
//user inputs the weight in ounces
  cout << "Input the weight of a box of cereal(ounces): ";
  cin >> weightInOunces;
//Calculation
  weightInTons = weightInOunces/convertToOunces;
  boxesForTon = 1/weightInTons;
//print results
  cout << "The cereal box weighs " << weightInTons << " tons." << endl;
  cout <<"You would need " << boxesForTon << " boxes to hold a ton of cereal." << endl;

}
