#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Input number 1: ";
    cin >> a;
    cout << "Input number 2: ";cin>>b;
        cout
         << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl
         << endl;
    a ^= b;
    b ^= a;
    a ^= b;
    // Using arithmetic operations
    // a=a+b;
    // b=a-b;
    // a=a-b;
    cout << "After Operations" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    return 0;
}