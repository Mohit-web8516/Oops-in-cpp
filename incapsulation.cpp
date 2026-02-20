//////////////incapsulation
/*
 It refers to wrapping data (variables) and methods (functions) into a single unit (class) and restricting direct access to the data. This ensures data hiding, security, and controlled access.

*/

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
class Account {
    private:
      double balance;
      string password;//data hiding
    public:
       string accountId;
       string username;
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