/*
1️⃣ Shallow Copy
Definition: Copies all member values bit by bit, including pointer addresses.

Result: Both objects share the same memory location for pointer members.

Problem: Changes in one object affect the other. Also, when objects are destroyed, both may try to free the same memory → double deletion error.


2️⃣ Deep Copy
Definition: Copies values and allocates separate memory for pointer members.

Result: Each object has its own independent copy of data.

Solution: Prevents shared memory problems and ensures safe destruction.


*/


// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// public:
//     string name;
//     double* cgpaPtr;

//     // Parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         cgpaPtr =  new double;
//         *cgpaPtr = cgpa;
//     }


//     // Copy constructor (explicitly defined, though default would work here)
//     // Student(const Student &s) {
//     //     name = s.name;
//     //     cgpa = s.cgpa;
//     // }
//     Student(Student &obj){
//           this->name = obj.name;
//         this->cgpaPtr = obj.cgpaPtr;
//     }

//     void getInfo() {
//         cout << "name : " << name << endl;
//         cout << "cgpa : " << *cgpaPtr << endl;
//     }
// };

// int main() {
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1);   // Copy constructor is called
//      s1.getInfo();
//     *( s2.cgpaPtr) = 9.2;
//     s1.getInfo();


//     return 0;
// }
///////////************************* */



#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    // Parameterized constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr =  new double;
        *cgpaPtr = cgpa;
    }


    // Copy constructor (explicitly defined, though default would work here)
    // Student(const Student &s) {
    //     name = s.name;
    //     cgpa = s.cgpa;
    // }
    Student(Student &obj){
          this->name = obj.name;
          cgpaPtr = new double; 
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("rahul kumar", 8.9);
    Student s2(s1);   // Copy constructor is called
     s1.getInfo();
    *( s2.cgpaPtr) = 9.2;
    // s1.getInfo();

    s2.name = "neha ";
    s2.getInfo();


    return 0;
}
