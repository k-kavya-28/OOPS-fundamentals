// Que 3: Write the definition for a class called complex that has floating point data members for 
// storing real and imaginary parts. 
// The class has the following member functions:
//  void set(float, float) to set the specified value in object
//  void disp() to display complex number object
//  complex sum(complex) to sum two complex numbers & return complex number
// 1. Write the definitions for each of the above member functions.
// 2. Write main function to create three complex number objects. Set the value in two objects and 
// call sum() to calculate sum and assign it in third object. Display all complex numbers.

#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float img;

public:
    void set(float x, float y)
    {
        real = x;
        img = y;
    }
    void disp()
    {
        cout << real << " + j" << img << endl;
    }
    complex sum(complex c)
    {
        complex n;
        n.real = real + c.real;
        n.img = img + c.img;
        return n;
    }
};
int main()
{
    complex comp1, comp2, comp3;
    comp1.set(23, 24);
    comp2.set(25, 26);
    comp3 = comp1.sum(comp2);
    cout << "\nComplex Number 1: ";
    comp1.disp();
    cout << "\nComplex Number 2: ";
    comp2.disp();
    cout << "\nComplex Number 3: ";
    comp3.disp();

    return 0;
}