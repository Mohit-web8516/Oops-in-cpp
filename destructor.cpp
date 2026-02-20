/*Destructor in C++
A destructor in C++ is a special member function of a class that is automatically called when an object goes out of scope or is explicitly deleted. Its main purpose is to release resources (like memory, file handles, or network connections) that the object may have acquired during its lifetime.*/

/*



//////////***********//////////////////// */
/*
Key Features
Has the same name as the class, but is preceded by a tilde (~).

No return type and no parameters.

Each class can have only one destructor.

Called automatically when:

An object goes out of scope.

delete is used on a dynamically allocated object.

If you don’t define one, the compiler provides a default destructor

*/
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


    
    Student(Student &obj){
          this->name = obj.name;
          cgpaPtr = new double; 
        *cgpaPtr = *obj.cgpaPtr;
    }

    //destructor
    ~Student(){

        cout << "Hi, I delete everything \n";
        delete cgpaPtr;
    }
    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("rahul kumar", 8.9);
     s1.getInfo();


    return 0;
}