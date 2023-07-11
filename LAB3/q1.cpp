// CODE
#include <iostream>
using namespace std;
int mul(int a, int b)
{
    int x;
    x = a * b;
    return x;
}
int main()
{
    int a, b, c;
    cout << "Enter Number 1: ";
    cin >> a;
    cout << endl
         << "Enter Number 2: ";
    cin >> b;
    c = mul(a, b);
    cout << endl
         << "The product is: " << c;
    return 0;
}
