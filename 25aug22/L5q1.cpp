// Que 1: Write a C++ program to create a following class: [Use Array within a class]
// class student
// {
// char name [20];
// int roll_no;
// int marks[6];
// public:
// void getdata ();
// void tot_marks ();
// } ;
// void getdata will take input of name, roll no and marks in 6 subjects.
// void tot_marks will display the total marks of student in 6 subjects. 

#include<iostream>
using namespace std;

// const int size=5;

class student
    {
        
        char name[20];
        int roll_no;
        int marks[6];
        public:
        void getdata ();
        void tot_marks ();
    };

void student :: getdata ()
{
cout<<"\nEnter name: ";
Cin>>name;
cout<<"\nEnter roll no: ";
Cin>>roll_no;
for(int i=0; i<6; i++)
{
cout<<"Enter marks in subject"<<(i+1)<<": ";
cin>>marks[i] ;
}

void student :: tot_marks() //calculating total marks
{
int total=0;
for(int i=0; i<6; i++)
total+ = marks[i];
cout<<"\n\nTotal marks "<<total;
}

void main()
student stu;
stu.getdata() ;
stu.tot_marks() ;
getch();
}