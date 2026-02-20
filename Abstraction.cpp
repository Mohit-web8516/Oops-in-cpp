/*
Abstraction is one of the core concepts of OOP. It means showing only the essential features of an object while hiding the internal implementation details.

👉 In simple words: You care about what something does, not how it does it.

✨ Easy Real-Life Analogy
Think of a TV remote:

You press buttons to change channels or volume.

You don’t need to know the internal electronics or signals.
That’s abstraction — you interact with the interface, not the implementation.

*/


////////////////////////////////

// #include <iostream>
// using namespace std;

// // Abstract base class
// class Shape {
// public:
//     // Pure virtual function (no body here)
//     virtual void draw() = 0;
// };

// // Derived class
// class Circle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing a Circle" << endl;
//     }
// };

// // Derived class
// class Rectangle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing a Rectangle" << endl;
//     }
// };

// int main() {
//     Shape* s;   // Base class pointer

//     Circle c;
//     Rectangle r;

//     s = &c;
//     s->draw();  // Calls Circle’s version

//     s = &r;
//     s->draw();  // Calls Rectangle’s version

//     return 0;
// }


//////////////////////////////////////////////////

//static keyword



#include <iostream>
using namespace std;

void counter() {
    static int count = 0;  // Initialized only once
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    counter();  // Count = 1
    counter();  // Count = 2
    counter();  // Count = 3
    return 0;
}
