// CODE
#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;

public:
    void set(int r, int s)
    {
        real = r;
        imag = s;
    }
    void disp()
    {
        cout << real << "+" << imag << "i" << endl
             << endl;
    }
    complex sum(complex obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};
int main()
{
    int r, s;
    complex obj1;
    complex obj2;
    cout << "Enter real part of complex number 1: ";
    cin >> r;
    cout << "Enter imaginary part of complex number 1: ";
    cin >> s;
    obj1.set(r, s);
    cout << "Enter real part of complex number 2: ";
    cin >> r;
    cout << "Enter imaginary part of complex number 2: ";
    cin >> s;
    obj2.set(r, s);
    complex obj3 = obj1.sum(obj2);
    cout << "The complex numbers are" << endl;
    obj1.disp();
    cout << endl;
    obj2.disp();
    cout << endl
         << "The sum is: ";
    obj3.disp();
    return 0;
}