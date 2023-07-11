#include <iostream>
using namespace std;
int pow(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else
        return (a * pow(a, b - 1));
}
int main()
{
    int a, b, c;
    cout << "Enter base: ";
    cin >> a;
    cout << endl
         << "Enter power: ";
    cin >> b;
    c = pow(a, b);
    cout << endl
         << "The answer of a^b is: " << c;
    return 0;
}
