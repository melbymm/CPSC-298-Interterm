#include <iostream>
using namespace std;

void zeroBoth(int num1, int num2){
//setting to 0
  num1 = 0;
  num2 = 0;
//output new numbers
  cout << "The numbers are now: " << num1 << " and " << num2 << endl;
}

int main(int argc, char **argv){
  int numberOne;
  int numberTwo;
//prompting for input
  cout << "Enter a number: ";
  cin >> numberOne;
  cout << "Enter a number: ";
  cin >> numberTwo;

  zeroBoth(numberOne,numberTwo);



}
