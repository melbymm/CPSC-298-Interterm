#include<iostream>
using namespace std;

int main(int argc, char **argv){

//initialize
  int attendance = 0;
  int capacity = 0;
  int spareRoom = 0;
  int tooMany = 0;

//output asking for capacity
  cout << "How many people can be in this room?: " << endl;
  //taking inout for capacity
  cin >> capacity;
  cout << "How many people are going to be in attendance?: " << endl;
  cin >> attendance;
//check if under capacity
  if(attendance <= capacity){
    spareRoom = capacity - attendance;
    cout << "Your meeting can fit. You have room for " << spareRoom << " more." << endl;
  }
  else{
    tooMany = attendance - capacity;
    cout << "Too many people! You need to kick out " << tooMany << " people to hold the meeting." << endl;
  }

}
