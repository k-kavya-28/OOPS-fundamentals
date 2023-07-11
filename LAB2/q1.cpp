#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number to check whether it is even or odd: ";
    cin >> x;
    if (x % 2 == 0)
        cout << "The entered number is even.";
    else
        cout << "The entered number is odd.";
    return 0;
}