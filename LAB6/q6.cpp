#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void getData(int a, int b)
    {
        r = a;
        i = b;
    }
    void show()
    {
        cout << "\nReal: " << r;
        cout << "\nImag: " << i;
    }
    void operator++()
    {
        r++;
        i++;
    } // Prefix
    void operator++(int x)
    {
        r++;
        i++;
    } // Postfix
};
int main()
{
    complex c1;
    int real, complex;
    cout << "Enter real and imaginary part of a complex number: ";
    cin >> real >> complex;
    c1.getData(real, complex);
    c1++;
    c1.show();
    ++c1;
    c1.show();
    return 0;
}