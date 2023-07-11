// CODE 1
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "The swapped numbers are" << endl
         << " a: " << a << " b: "<<b<<endl<<endl; 
}
int main()
{
    int a, b;
    cout << "Enter Number 1: ";
    cin >> a;
    cout << endl
         << "Enter Number 2: ";
    cin >> b;
    cout << "The original numbers are" << endl
         << " a: " << a << " b: "<<b<<endl<<endl; 
        swap(a, b);
    return 0;
}
