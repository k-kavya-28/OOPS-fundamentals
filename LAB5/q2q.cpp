// CODE
#include <iostream>
    using namespace std;
class student
{
    string name;
    int
        roll_no;
    int
        marks[6];
    int grade;
    char
        section;

public:
    void getdata();
    void disp();
};
void student::getdata()
{
    cout << "Enter the student's name : ";
               getline(cin >> ws, name);
    cout << "Enter the student'sroll no. : ";cin>>roll_no;
    cout<< "Enter the student's marks in 6,subjects\n ";for(int i=0;i<6;i++)
        {
            cout << "Marks in Subject"<<i+1<<" : ";cin>>marks[i];
        } cout
         << "Enter the student's class and section: ";
    cin >> grade >> section;
    cout << endl
         << endl;
}
void student::disp()
{
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += marks[i];
    }
    cout << "Name: " << name << endl;
    cout << "Roll no.: " << roll_no << endl;
    cout << "Class and Section: "<<grade<<section<<endl; cout<<" Total marks in 6 subjects : "<<sum<<endl<<endl;
}
int main()
{
    int i, n;
    cout << "Enter the number of students:";cin>>n;
        cout
         << endl;
    student a[n];
    for (i = 0; i < n; i ++)
    {
        cout << "Enter the data of Student"<<i+1<<"\n ";a[i].getdata();
    }
    cout << "Printing Student Data\n";
    for (i = 0; i < n; i++)
    {
        a[i].disp();
    }
    return 0;
}
