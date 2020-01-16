#include <iostream>

using namespace std;

int numSquare(int num);

char letterGrade;

char gradeLetter(int gradePercent){
  cout << "Enter your grade percentage: "

  if ((gradePercent >= 90) && (gradePercent <= 100)){
    letterGrade = 'A';
  }
  else if (gradePercent >= 80){
    letterGrade = 'B';
  }
  else if (gradePercent >= 70){
    letterGrade = 'C';
  }
  else if ((gradePercent < 70) && gradePercent >= 0){
    letterGrade = 'F';
  }
  else{
    cout << "Invalid entry"
    break;
  }

}

int main(int argc, char ** argv){
  char tempGrade = gradeLetter(25);
  cout "Your letter grade is: " << tempGrade << endl;
}
