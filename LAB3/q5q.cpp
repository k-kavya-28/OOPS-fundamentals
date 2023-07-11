// CODE
#include <iostream>
using namespace std;
struct cricket
{
    string name;
    int age;
    int test;
    int avg;
};
int main()
{
    struct cricket arr[3];
    cout << "Enter details of cricketers " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name of cricketer: ";
        cin >> arr[i].name;
        cout << "Enter age of cricketer: ";
        cin >> arr[i].age;
        cout << "Enter no. of test matches played by cricketer: ";
        cin >> arr[i].test;
        cout << "Enter the average runs scored in test matches: ";
        cin >> arr[i].avg;
        cout << endl
             << endl;
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = i; j < 20; j++)
        {
            if (arr[j].avg < arr[i].avg)
            {
                int temp = arr[i].avg;
                arr[i].avg = arr[j].avg;
                arr[j].avg = temp;
            }
        }
    }
    cout << "Details of cricketers in ascending order of average runs" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "Name of cricketer: ";
        cout << arr[i].name << endl;
        cout << "Age of cricketer: ";
        cout << arr[i].age << endl;
        cout << "No. of test matches played by cricketer: ";
        cout << arr[i].test << endl;
        cout << "Average runs scored in test matches: ";
        cout << arr[i].avg << endl;
        cout << endl
             << endl;
    }
    return 0;
}
