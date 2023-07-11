// CODE
// STATIC AND NON-STATIC VARIABLES
#include <iostream>
using namespace std;
int fun();
int main()
{
    int a = fun();
    cout << a << " is the original value." << endl;
    int b = fun();
    cout << b << " is the new value.";
    return 0;
}
int fun()
{
    static int a = 5;
    a += a;
    return a;
}