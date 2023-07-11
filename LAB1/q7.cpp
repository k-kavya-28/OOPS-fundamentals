#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Input number 1: ";
    cin >> a;
    cout << "Input number 2: ";
    cin >> b;
    b += a;
    a -= 10;
    cout << b << " is the sum(b+=a)" << endl;
    cout << a << " is the 10 less than the original value of number 1(a-=10)" << endl;
    return 0;
}