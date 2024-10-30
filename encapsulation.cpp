#include <iostream>
#include <string>

using namespace std;

class Person { // class person  

  private:   // data hiding 
    string name; // private member variables name and age 
    int age;

  public:       //parameterised constructor 
    Person(string name, int age) { // which initailaize person object with name and age 
      this->name = name;
      this->age = age;
    }

//copy constructor 
    Person(Person &obj) { 
        cout<<"copy constructor"<<endl;
        this->name = name;
        this->age = age;

    }
    void setName(string name) {  // setters and getters 
      this->name = name;
    }
    string getName() {
      return name;
    }
    void setAge(int age) {
      this->age = age;
    }
    int getAge() {
      return age;
    }
};

int main() {
  Person person("Om Patel", 20);  

  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;

  person.setName("krishna");
  //person.setAge(20);

  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;

Person p2(person); // default copy constructor  
p2.getAge();

  return 0;
}