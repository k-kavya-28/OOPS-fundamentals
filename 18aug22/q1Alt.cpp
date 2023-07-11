#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<map>
using namespace std;


class student
{
        private:                
        char name[20],regd[10],branch[10];
        int sem;
        float cgpa;
        public:
        void input();
        void display();
                        
                
};
void student::input()
{
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Regdno.:";
        cin>>regd;
        cout<<"Enter Branch:";
        cin>>branch;
        cout<<"Enter Sem:";
        cin>>sem;
        cout<<"enter cgpa of sem"<<endl;
        cin>>cgpa;
}
void student::display()
{
        cout<<"\nName:"<<name;
        cout<<"\nRegdno.:"<<regd;
        cout<<"\nBranch:"<<branch;
        cout<<"\nSem:"<<sem;
        cout<<"\ncgpa"<<cgpa;
}
int main(){
    student s;
    s.input();  
    s.display();
    return 0;
}