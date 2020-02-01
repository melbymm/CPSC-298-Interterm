#include<iostream>
using namespace std;

int main(int argc, char **argv){
//creating array
  int a[4][5];
  int temp = 0;
// lopping through, getting input for every inxed position
  for(int i = 0; i<4; ++i){
    for(int j = 0; j<5; ++j){
      cout << "Enter an integer: " << endl;
      cin >> temp;
      a[i][j] = temp;
    }
  }
  //printing array in rows
  for(int k = 0; k<4; ++k){
    for(int m = 0; m<5; ++m){
      if(m == 4){
        cout << a[k][m] << endl;
        }
      else{
        cout << a[k][m] << " ";
      }
    }
  }
}
