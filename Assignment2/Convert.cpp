#include <iostream>
using namespace std;
//declaring methods
void inputuser();
void convertMetric(float feet, float inches);
void outputResults(float meters, float cm);
void inputUser(){

  float feet = 0.0;
  float inches = 0.0;
  float justFeet = 0.0;
//prompting user input
  cout << "Enter feet: " << endl;
  cin >> feet;
  cout << "Enter inches: " << endl;
  cin >> inches;
//calling next method
  convertMetric(feet, inches);
}

void convertMetric(float feet, float inches){
//converts feet + inches to just feet
  float justFeet = feet + (inches/12);
  //converts feet to meters
  float meters = .3048 * justFeet;
  //converts meters to cm
  float cm = meters * 100;
//calls next method
  outputResults(meters, cm);
}
void outputResults(float meters, float cm){
  //output staatements
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << meters * 100 << endl;
}

int main(){

  bool cont = true;
  string going = "";

while(cont == true){
//loop checking if user wants to exit
    inputUser();
    cout << "Continue? (Y/N): " << endl;
    cin >> going;
    if (going == "N"){
      cont = false;
    }
    else if(going == "n"){
      cont = false;
    }

  }
}
