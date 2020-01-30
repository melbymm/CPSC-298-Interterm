#include "pet.h"

int main(){
  //creating 2 instances of pet class
  pet *p = new pet("Rufus", 4, "Dog", 45.5);
  pet *p2 = new pet("Gaucho", 2, "Cat", 15.2);
//printing details about the pets
  cout << p->getName() << " is a " << p->getAge() << " year old " << p->getType() << " who weighs " << p->getWeight() << " pounds." << endl;
  cout << p2->getName() << " is a " << p2->getAge() << " year old " << p2->getType() << " who weighs " << p2->getWeight() << " pounds." << endl;
  delete p;
  delete p2;

  return 0;
}
