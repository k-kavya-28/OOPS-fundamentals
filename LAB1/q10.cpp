#include <iostream>
using namespace std;
int main()
{
    int x;
    float a, b, c;
    cout <<"Enter 1 for sum, 2 for difference, 3 for product and 4 for quotient,5 for remainder: ";
    cin >> x;
    cout << "Enter appropriate input for remainder" << endl;
    cout << "Input number";
            cin >>
        a;
    cout << "Input number 2: ";
            cin >>
        b;
    switch (x)
    {
    case 1:
    {
        c = a + b;
        cout << c << " is the sum" << endl;
        break;
    }
    case 2:
    {
        c = a - b;
        cout << c << " is the difference" << endl;
        break;
    }
    case 3:
    {
        c = a * b;
        cout << c << " is the product" << endl;
        break;
    }
    case 4:
    {
        c = int(a) / int(b);
        cout << c << " is the quotient" << endl;
        break;
    }
    case 5:
    {
        c = int(a) % int(b);
        cout << c << " is the remainder" << endl;
        break;
    }
    }
    return 0;
}