/*
🎭 Polymorphism ===
Polymorphism is another pillar of Object-Oriented Programming (OOP). The word itself means “many forms”.  polymorphism allows the same function or operator to behave differently depending on the context.

✨ Easy Way to Understand
Think of the word “run”:

A person can run 🏃

A machine can run ⚙️

A program can run 💻

Same word, but different meanings depending on context. That’s exactly what polymorphism does in programming.


*/

// #include <iostream>
// #include <string>
// using namespace std;
// class Student{
// public:
//     string name;


//  Student(){
// cout << "non - parameterized \n";

// }
// Student(string name){
//     this->name = name;
//     cout << "parameterized \n";
// }
// };
// int main (){
//     Student s1("tony shark");
//     return 0;
// }

///////////////////////************/ */
//////function overloading

// #include <iostream>
// #include <string>
// using namespace std;
// class Print{
// public:
   


//     void show (int x){
//     cout << "int: " << x << endl;;

// }
//    void show(char ch){
//     cout << "char : " << ch << endl;
//    }
// };
// int main (){
//    Print p1;
//    p1.show('&');
//    return 0;
// }


//////////////////////************************//////// */

//function overriding


#include <iostream>
#include <string>
using namespace std;
class Parent{
public:
   
    void getInfo(){
        cout << "parent class \n";
    }


};
class Child : public Parent{
    public:
    void getInfo(){
        cout << "child class \n";
    }
};

int main (){
   Child c1;
   c1.getInfo();
   return 0;
}

