// CODE
#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    float marks;
    float cgpa;

public:
    void setdata()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
        cout << "Enter CGPA: ";
        cin >> cgpa;
        cout << endl;
    }
    void getdata(){
        cout << "The data of the student is as follows\n"
             << "Roll no: "<<rollno<<endl<<" Name : "<<name<<endl<<" Marks :"<<marks<<endl<<" CGPA :"<<cgpa<<endl<<endl; } 
    };
    int main()
    {
        int x;
        cout << "Enter the number of students: ";
        cin >> x;
        student obj[x];
        for (int i = 0; i < x; i++)
        {
            cout << "Student " << i + 1 << endl;
            obj[i].setdata();
        }
        for (int i = 0; i < x; i++)
        {
            cout << "DETAILS OF STUDENT " << i + 1 << endl;
            obj[i].getdata();
        }
        return 0;
    }
