// 13. Write a C++ program to add two numbers using single inheritance. Accept these two numbers from the user in base class and display the sum of these two numbers in derived class.

#include<iostream>

using namespace std;

class data_input //base class
{
    protected:
        int a, b;

    public:
        void accept()
        {
            cout << "Enter no.1 : ";
            cin >> a;
            cout << "Enter no.2 : ";
            cin >> b;
        }
};

class Addition : public data_input
{
        int sum;

    public:
        void add()
        {
            sum=a+b;
        }

        void display()
        {
            cout << sum << endl; 
        }
};

int main()
{
    Addition a;
    a.accept();
    a.add();
    a.display();
    
    return 0;
}
