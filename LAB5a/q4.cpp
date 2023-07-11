#include <iostream>
using namespace std;
class numbers
{
    int n;
    int m;

public:
    void read()
    {
        cout << "Enter the two numbers: ";
        cin >> n >> m;
    }
    void disp()
    {
        cout << "n= " << n << endl;
        cout << "m= " << m << endl;
    }
    friend void swep(numbers &a); // call by reference
};
void swep(numbers &a)
{
    int t;
    t = a.m;
    a.m = a.n;
    a.n = t;
}
int main()
{
    numbers n1;
    n1.read();
    n1.disp();
    swep(n1); // friend function is called like a normal function.
    n1.disp();
}