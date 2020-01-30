#include <iostream>
using namespace std;

class pet{
  public:
    pet();
    pet(string name, int age, string type, double weight);

    string getName();
    int getAge();
    string getType();
    double getWeight();

    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

  private:
    string nameSetter;
    int ageSetter;
    string typeSetter;
    double weightSetter;


  };
