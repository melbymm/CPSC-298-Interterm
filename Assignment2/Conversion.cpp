#include <iostream>
using namespace std;

int inputUser(){
  double feet = 0;
  double inches = 0;
  cout << "Enter feet: ";
  cin >> feet;
  cout << "Enter Inches: ";
  cin >> inches;

  return feet;
  return inches;

}
double calc(double feet, double inches){

   double metersVal = 0;
   double cmVal = 0;
   int totalinches = 0;
   totalinches = (12 * feet) + inches;

   metersVal = totalinches * 0.0254;
   cmVal = totalinches * 2.54;

   return metersVal;
   return cmVal;



 }
void outputUser(){
  double metersVal = metersVal;
  double cmVal = cmVal;


  cout << "Length in meters: " << metersVal << endl;
  cout << "Length in cm: " << cmVal << endl;
}

int main(int argc, char **argv){
  inputUser();
  calc(double feet, double inches);
  outputUser();

}

//string exitCheck;
//bool x;

//while (x == true){
//  cout << "Continue or exit?: "
//  cin exitCheck;

//  if (exitCheck == "exit"){
//    x = false;
//  }
//  else {

  //}

//}
