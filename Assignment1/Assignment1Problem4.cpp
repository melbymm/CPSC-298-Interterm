#include<iostream>
using namespace std;

main(int argc, char **argv){
  float cost = 0.00;
  float inflationRate = 0.00;
  float inflationDec = 0.00;
  float years = 0.00;
  float futureCost = 0.00;

  cout << "How much does the item cost?: " << endl;
  cin >> cost;
  cout << "What is the inflation rate?(Percent): " << endl;
  cin >> inflationRate;
  cout << "How many years in the future?: " << endl;
  cin >> years;

  inflationDec = inflationRate/100;

  futureCost = cost + (cost * inflationDec * years);

  cout << "Your adjusted budget is: " << futureCost << endl;


}
