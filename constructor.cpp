// #include <iostream>
// using namespace std;

// class Car {
// private:
//     string brand;
//     int mileage;

// public:
//     // Default Constructor
//     Car() {
//         brand = "Unknown";
//         mileage = 0;
//     }

//     // Parameterized Constructor
//     Car(string b, int m) {
//         brand = b;
//         mileage = m;
//     }

//     // Copy Constructor
//     Car(const Car &c) {
//         brand = c.brand;
//         mileage = c.mileage;
//     }

//     void display() {
//         cout << "Brand: " << brand << ", Mileage: " << mileage << endl;
//     }
// };

// int main() {
//     Car car1;                  // Default constructor
//     Car car2("Tesla", 1200);   // Parameterized constructor
//     Car car3 = car2;           // Copy constructor

//     car1.display();
//     car2.display();
//     car3.display();
   

//     return 0;
// }


/////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;

public:
//non-parameterized
    Teacher(){
        dept = "Computer science";
    }
//parameterized
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    string name;
    string dept;
    string subject;



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
    
    t1.getInfo();

    return 0;
   
}