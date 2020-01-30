#include <iostream>
using namespace std;

void addTax(float taxRate, float cost){
  float taxDec = taxRate/100;
  cost = cost + (cost * taxDec);

  cout << cost << endl;
}

int main(){
  float tax = 0;
  float price = 0;

  cout << "Enter tax rate(percent): " << endl;
  cin >> tax;
  cout << "Enter price: " << endl;
  cin >> price;

  addTax(tax,price);

}
