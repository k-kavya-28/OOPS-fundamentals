#include <iostream>
#include <vector>
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
    friend int greaters(numbers);
};
int greaters(numbers a)
{
    if (a.n > a.m)
        return a.n;
    else
        return a.m;
}
int main()
{
    numbers a;
    a.read();
    cout << "The greater number is :"<<greaters(a);
        return 0;
}