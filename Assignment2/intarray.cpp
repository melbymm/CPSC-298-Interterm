#include<iostream>
using namespace std;

int main(int argc, char **argv){
//creating array
  int numberArray [10];
  int tempInt = 0.0;
//getting input for all index positions
  for(int i = 0; i < 10 ; ++i){
    cout << "Enter a non-negative integer: " << endl;
    cin >> tempInt;
    numberArray[i] = tempInt;
  }
  //outputting the numbers
  for(int j = 0; j < 10 ; ++j){
    cout << numberArray[j] << endl;
  }
}
