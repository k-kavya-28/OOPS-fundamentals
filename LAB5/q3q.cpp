// CODE:
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
    { // this cannot be made inline since we cannot use loops ininline functions.
        float sum = 0;
        int i = 0;
        for (i = 0; i < 6; i++)
        {
            sum = sum + marks[i];
        }
        return sum;
    };
    void display()
    {
        cout << "name of the student: " << name << endl;
        cout << "roll number of the student: " << rollno << endl;
        cout << "total marks of the student: " << total() << endl;
    }
};
int main()
{
    int n, j;
    cout << "enter number of students: " << endl;
    cin >> n;
    student arr[n];
    for (j = 0; j < n; j++)
    {
        cout << "for student " << j + 1 << " :" << endl;
        arr[j].getdata();
    }
    cout << "displaying data: " << endl;
    for (j = 0; j < n; j++)
    {
        cout << " STUDENT " << j + 1 << " :" << endl;
        arr[j].display();
        cout << endl;
    }
    return 0;
}
