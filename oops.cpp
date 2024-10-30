#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    Teacher() {  // constructor , always declare public 
        dept = "cs";
    }

   // properties or attributes
    string name;
    string dept;
    string subject;
    
    // methods or member functions 
    void changeDept(string newDept) {
        dept = newDept;
    }

    // setter and getter functions  
    void setSalary(double s) { // setter -use to set private values 
        salary = s;

    }
    double getSalary() { // to get private values 
        return salary;
    }

};



int main () {

    Teacher t1; // object created for teacher as t1
    // assign value to t1 (for objects access its properties)
    t1.name = "Tejal";
    t1.subject = "OOP";
   
    t1.setSalary(2500);

    cout<<t1.dept<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}