/*
 Inheritence ===One class (child/derived class) can reuse the properties and behaviors of another class (parent/base class).

✨ Easy Way to Understand
Think of real life:

You inherit traits from your parents (like eye color, language, habits).

Similarly, in C++, a child class inherits variables and functions from a parent class.

*/

// #include<iostream>
// #include<string>
// using namespace std;
// class Person{
// public:
//      string name;
//      int age;

//     //  Person(string name,int age){
//     //     this->name = name;
//     //     this->age = age;
//     //  }
//     Person(){
//      cout << "parent constructor....\n";
//     }
// };

// class Student: public Person{
// public: 
//    int rollno;
//    Student(){
//     cout << "child constructor...\n";
//    }

//    void getInfo(){
//     cout << "name : " << name << endl;
//     cout << "age : " << age << endl;
//     cout << "rollno : " << rollno << endl;
//    }

// };
// int main(){
//     Student s1;
//     s1.name = "rahul kumar";
//     s1.age = 21;
//     s1.rollno = 1234;

//     s1.getInfo();

//     return 0;
   
// } 
////////**************////////////////////// */
//multilevel inheritence
// #include<iostream>
// #include<string>
// using namespace std;
// class Person{
// public:
//      string name;
//      int age;
// };

// class Student: public Person{
// public: 
//    int rollno;


// };

// class GrandStudent : public Student{
//     public:
//       string researchArea;
// };
// int main(){
//      GrandStudent s1;
//      s1.name = "tony shark ";
//      s1.researchArea = "quantum physics";
//      cout << s1.name << endl;
//      cout << s1.researchArea << endl;
//     return 0;
   
// } 


/////////////////////////////////////////////////
//Multiple inheritence



// #include<iostream>
// #include<string>
// using namespace std;
// class Student{
// public:
//      string name;
//      int rollno;
// };

// class Teacher{
// public: 
//    string subject;
//    double salary;


// };

// class TA : public Student,public Teacher{
    
// };
// int main(){
//    TA t1;
//    t1.name = "tony shark";
//    t1.subject = "engineering";

//    cout << t1.name << endl;
//    cout << t1.subject << endl;
//     return 0;
   
// } 


///////////////////////////////////

//////Hierarchial inheritence
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;
};

// Derived class (inherits from Person)
class Student : public Person {
public:
    int rollno;
};

// Further derived class (inherits from Student)
class GraduateStudent : public Student {
public:
    string thesisTopic;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Thesis Topic: " << thesisTopic << endl;
    }
};

int main() {
    GraduateStudent gs;
    gs.name = "Rahul Kumar";   // Inherited from Person
    gs.age = 24;               // Inherited from Person
    gs.rollno = 101;           // Inherited from Student
    gs.thesisTopic = "Artificial Intelligence"; // Own member

    gs.displayInfo();
    return 0;
}
