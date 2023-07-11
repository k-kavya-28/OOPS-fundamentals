// CODE
#include <iostream>
using namespace std;
struct students
{
    string name;
    int grade;
    int rollno;
};
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    struct students *p[n], p1[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = &p1[i];
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> p[i]->name;
        cout << "Enter the grade of the student " << i + 1 << ": ";
        cin >> p[i]->grade;
        cout << "Enter the roll number of the student " << i + 1 << ": ";
        cin >> p[i]->rollno;
        cout << endl;
    }
    cout << "STUDENT DETAILS" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name of the student " << i + 1 << ": ";
        cout << p[i]->name << endl;
        cout << "Grade of the student " << i + 1 << ": ";
        cout << p[i]->grade << endl;
        cout << "Roll number of the student " << i + 1 << ": ";
        cout << p[i]->rollno << endl
             << endl;
    }
    return 0;
}