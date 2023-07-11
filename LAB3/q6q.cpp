// CODE
#include <iostream>
using namespace std;
struct complex
{
    int real;
    int imag;
};
int main()
{
    struct complex a, b, c, d;
    cout << "Enter real part of first complex number: ";
    cin >> a.real;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> a.imag;
    cout << "The first complex number is: " << a.real << "+" << a.imag << "i" << endl;
    cout << "Enter real part of second complex number: ";
    cin >> b.real;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> b.imag;
    cout << "The second complex number is: " << b.real << " + " << b.imag << "i" << endl;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    cout << "The sum of the complex numbers is: " << c.real << " + " << c.imag << "i" << endl;
    d.real = a.real - b.real;
    d.imag = a.imag - b.imag;
    if (d.imag >= 0)
    {
        cout << "The sum of the complex numbers is: " << d.real << " + " << d.imag << "i" << endl;
    }
    else
        cout << "The sum of the complex numbers is: " << d.real << d.imag << "i" << endl;
    return 0;
}