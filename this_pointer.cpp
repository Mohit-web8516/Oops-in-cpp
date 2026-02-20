/*
Key Points
this refers to the current object.

It is automatically available inside all non-static member functions.

Friend functions do not have a this pointer (since they are not members of the class).

Common uses:

To resolve naming conflicts between data members and parameters.

To return the current object (useful for method chaining).

To pass the current object as an argument to another function.


*/


////////////////////////////////////
// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int age;
// public:
//     Student(int age) {
//         this->age = age;  // Resolves conflict between parameter and data member
//     }
//     void show() {
//         cout << "Age: " << age << endl;
//     }
// };

// int main() {
//     Student s(20);
//     s.show();
//     return 0;
// }



////////******************************************
//  */


// #include<iostream>
// #include<string>
// using namespace std;
// class Teacher{
// private:
//     double salary;

// public:
//    string name;
//    string dept;
//    string subject;
// //non-parameterized
//     Teacher(){
//         dept = "Computer science";
//     }
// //parameterized
//     Teacher(string name, string dept, string subject, double salary){
//      this->   name = name;
//      this->   salary = salary;
//      this->   subject = subject;;
//      this->  dept = dept; ;
     
//     }



//     void changeDept(string newDept){
//         dept = newDept;
//     }

   
//     void getInfo(){
//         cout << "name :" << name << endl;
//         cout << "subject: " << subject << endl;
//     }


// };
// int main(){

//     Teacher t1("john","computerscience","c++",25000);
    
//     t1.getInfo();

//     return 0;
   
// }



///////////////////////////////////////////////////


#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;

public:
   string name;
   string dept;
   string subject;

//parameterized
    Teacher(string name, string dept, string subject, double salary){
     this->   name = name;
     this->   salary = salary;
     this->   subject = subject;;
     this->  dept = dept; ;
     
    }
    ///copym constructor
    Teacher (Teacher &orgObj){
        cout << "I am custom copy constructor!" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }


    void changeDept(string newDept){
        dept = newDept;
    }

   
    void getInfo(){
        cout << "name :" << name << endl;
        cout << "subject: " << subject << endl;
    }


};
int main(){

    Teacher t1("john","computerscience","c++",25000);
    
    Teacher t2 (t1); //default copy constructor call
    t2.getInfo();

    return 0;
   
}