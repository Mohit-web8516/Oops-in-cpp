// #include<iostream>
// #include<string>
// using namespace std;
// class Teacher{
    
// public:
//     //properties
//     string name;
//     string dept;
//     string subject;
//     double salary;


//     //methods //member function

//     void changeDept(string newDept){
//         dept = newDept;
//     }


// };
// int main(){

//     Teacher t1;
//     t1.name = "john";
//     t1.subject ="c++";
//     t1.dept = "Computer Science";
//     t1.salary = 25000;


//     cout << t1.name << endl;


//     return 0;
   
// }



/////////////////////////////////////
#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;

public:
    //properties
    string name;
    string dept;
    string subject;


    //methods //member function

    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }


};
int main(){

    Teacher t1;
    t1.name = "john";
    t1.subject = "c++";
    t1.dept = "Computer Science";
    t1.setSalary(25000); 


    cout << t1.name << endl;
    cout << t1.getSalary() << endl;


    return 0;
   
}