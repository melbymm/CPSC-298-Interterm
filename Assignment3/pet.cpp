#include "pet.h"

pet :: pet(){
  nameSetter = "";
  ageSetter = 0;
  typeSetter = "";
  weightSetter = 0.0;

}

pet :: pet(string name, int age, string type, double weight){
  nameSetter = name;
  ageSetter = age;
  typeSetter = type;
  weightSetter = weight;
}

string pet::getName(){
  return nameSetter;
}
int pet::getAge(){
  return ageSetter;
}
string pet::getType(){
  return typeSetter;
}
double pet::getWeight(){
  return weightSetter;
}
void pet::setName(string name){
  nameSetter = name;
}
void pet::setAge(int age){
  ageSetter = age;
}
void pet::setType(string type){
  typeSetter = type;
}
void pet::setWeight(double weight){
  weightSetter = weight;
}
