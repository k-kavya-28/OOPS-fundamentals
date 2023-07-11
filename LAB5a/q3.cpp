#include <iostream>
#include <cstring>
using namespace std;
class student
{
    string name;
    int roll;

public:
    void getdata()
    {
        cout << "enter the name: " << endl;
        getline(cin >> ws, name);
        cout << "enter the roll no.: " << endl;
        cin >> roll;
    }
    friend void display(student);
};
void display(student a)
{
    cout << "Name: " << a.name << endl;
    cout << "Roll No.: " << a.roll;
}
int main()
{
    student a;
    a.getdata();
    display(a); // friend functions are called like normal function, doesnt use dot operator.
}