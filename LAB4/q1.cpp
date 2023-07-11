#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int rollno;
    int marks;

    public:
    student(string s, int r, int m){
        name = s;
        rollno = r;
        marks = m;
    }

    void getStudent(){
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    cout<<"Enter name, roll_no and marks: "<<endl;
        string s;
        int r, m;
        cin>>s>>r>>m;
        student A(s,r,m);
        A.getStudent();

 return 0;
}