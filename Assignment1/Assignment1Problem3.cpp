#include<iostream>
using namespace std;

int main(int argc, char **argv){
  //initializing variables
  float hours = 0.00;
  float overtime = 0.00;
  float salary = 16.00;
  float social = 0.06;
  float income = 0.14;
  float state = 0.05;
  float medical = 10.00;
  float gross = 0.00;
  float socialHold = 0.00;
  float incomeHold = 0.00;
  float stateHold = 0.00;
  float takeHome = 0.00;

//output asking for hours
  cout <<  "How many hours did you work?: " << endl;
  cin >> hours;
//checks if working overtime
  if (hours <= 40){
    gross = hours * salary;
  }
  else if(hours > 40){
    overtime = hours - 40;
    hours = 40;
    gross = (1.5 * 16 * overtime) + (16 * hours);
  }
  //converts the tax rates to dollar values based off of salary
  socialHold = social * gross;
  incomeHold = income * gross;
  stateHold  = state * gross;

//subtracts taxes from amount taking home
  takeHome = gross - socialHold - incomeHold - stateHold - medical;

  cout << "Your gross income is: " << gross << endl;
  cout << "You paid " << socialHold << " in social security taxes." << endl;
  cout << "You paid " << incomeHold << " in income taxes." << endl;
  cout << "You paid " << stateHold << " in state taxes." << endl;
  cout << "After taxes, your income is: " << takeHome << endl;

}
