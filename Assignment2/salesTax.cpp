#include <iostream>
using namespace std;

void addTax(float taxRate, float cost){
//converting tax percent to decimal
  float taxDec = taxRate/100;
//calculate price with tax
  cost = cost + (cost * taxDec);
//output
  cout << cost << endl;
}

int main(){
  float tax = 0;
  float price = 0;
//prompting for input
  cout << "Enter tax rate(percent): " << endl;
  cin >> tax;
  cout << "Enter price: " << endl;
  cin >> price;

  addTax(tax,price);

}
