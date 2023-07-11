#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cout << "Enter a string: ";
    getline(cin, a);
    b = a;
    cout << "The original string was : " << a << endl;
    cout << "The new string is : " << b;
    return 0;
}