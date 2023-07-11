#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    complex() {}
    complex(int a, int b) : r(a), i(b) {}
    void show()
    {
        cout << r << " + i" << i;
    }
    friend complex operator+(complex, complex);
};
complex operator+(complex c1, complex c2)
{
    complex t;
    t.r = c1.r + c2.r;
    t.i = c1.i + c2.i;
    return t;
}
int main()
{
    int a, b;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> a >> b;
    complex c1(a, b);
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> a >> b;
    complex c2(a, b), c3 = c1 + c2;
    cout << "Sum of ";
    c1.show();
    cout << " and ";
    c2.show();
    cout << " is ";
    c3.show();
    return 0;
}