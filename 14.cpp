// 14. Write a C++ program to implement the following class hierarchy of Multilevel Inheritance : 
        // Student: id, name.
        //StudentExam (derived from Student): Accept Marks of 4 subjects
        //StudentResult (derived from StudentExam) : Calculate Percentage 
        //Define appropriate functions to accept and display details.

#include<iostream>
#include<stdio.h>

using namespace std;

class Student
{
        int roll;
        char name[25];
    public:
        void getdata()
        {
                cout<<"\n -----------------------------------------";
                cout<<"\n Enter Roll No.            : ";
                cin>>roll;
                cout<<"\n Enter Student Name        : ";
                cin>>name;
        }
        void putdata()
        {
                cout<<"\n -----------------------------------------";
                cout<<"\n ********** Student Marklist **********";
                cout<<"\n -----------------------------------------";
                cout<<"\n Roll No.             :  "<<roll;
                cout<<"\n Student Name         :  "<<name<<endl;
        }
};
class StudentExam : public Student      //Class StudentExam derived from Class Student
{
    public:
        int sub1, sub2, sub3, sub4;
        float per;
    public:
        void accept_data()
        {
                getdata();
                cout<<"\n Enter Marks for Subject 1 : ";
                cin>>sub1;
                cout<<"\n Enter Marks for Subject 2 : ";
                cin>>sub2;
                cout<<"\n Enter Marks for Subject 3 : ";
                cin>>sub3;
                cout<<"\n Enter Marks for Subject 4 : ";
                cin>>sub4;
        }
        void display_data()
        {
                putdata();
                cout<<"\n Marks of Subject 1   :  "<<sub1;
                cout<<"\n Marks of Subject 2   :  "<<sub2;
                cout<<"\n Marks of Subject 3   :  "<<sub3;
                cout<<"\n Marks of Subject 4   :  "<<sub4;
        }
};
class StudentResult : public StudentExam      //Class StudentResult derived from Class StudentExam
{
    public:
        void calculate ()
        {
                per = (sub1+sub2+sub3+sub4)/4.0;
                cout<<"\n\n Total Percentage     :  "<<per;
                cout<<"\n ----------------------------------------- \n";
        }
};
int main()
{
        StudentResult str;     //Object 'str' is created of derived Class StudentResult
        int cnt, i;
        cout<<"\n Enter No. of Students You Want? : ";
        cin>>cnt;
        for(i=0; i<cnt; i++)
        {
                str.accept_data();
                str.display_data();
                str.calculate();
        }
        return 0;
}
