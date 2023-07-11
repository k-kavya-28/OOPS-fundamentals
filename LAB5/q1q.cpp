// CODE
#include <iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    float marks[6];

public:
    void getdata()
    {
        cout << "enter name: " << endl;
        getline(cin >> ws, name);
        cout << "enter roll number: " << endl;
        cin >> rollno;
        int i = 0;
        for (i = 0; i < 6; i++)
        {
            cout << "enter marks in subject " << i + 1 << endl;
            cin >> marks[i];
        }
    };
    float total()
    {
        float sum = 0;
        int i = 0;
        for (i = 0; i < 6; i++)
        {
            sum = sum + marks[i];
        }
        return sum;
    };
};
int main()
{
    student a;
    a.getdata();
    cout << "total marks of the student : " << a.total() << endl;
    return 0;
}