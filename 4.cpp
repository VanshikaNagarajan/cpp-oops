// 4. Write a C++ program to design a class having a static member function showcount() which displays the no. of objects created.

#include <iostream>
using namespace std;

class MyClass {
    static int count;
    
    public:
    MyClass() {
        count++;
    }
    
    static void showcount() {
        cout << "Number of objects created: " << count << endl;
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
    MyClass::showcount();
    return 0;
}
