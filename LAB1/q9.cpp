#include <iostream>
using namespace std;
int main()
{
    int n;
    float f;
    cout << "Enter the no. of days you are late to return the book: ";
            cin >>
        n;
    if (n <= 5)
    {
        f = 0.50;
        cout << "The fine to be paid is " << f << " rupee/s.";
    }
    else if (n >= 6 && n <= 10)
    {
        f = 1;
        cout << "The fine to be paid is " << f << " rupee/s.";
    }
    else if (n > 10 && n <= 30)
    {
        f = 5;
        cout << "The fine to be paid is " << f << " rupee/s.";
    }
    else if (n > 30)
    {
        cout << "Your membership has been cancelled.";
    }
    return 0;
}