// CODE 1
#include <iostream>
using namespace std;
int main()
{
    int i, n, c, a = 1, b = 1;
    cout << "Enter the number of Fibonacci Terms: ";
    cin >> n;
    cout << a << " " << b << " ";
    for (i = 0; i < n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return 0;
}
// CODE 2
#include <iostream>
using namespace std;
int main()
{
    int i = 0, n, c, a = 1, b = 1;
    cout << "Enter the number of Fibonacci Terms: ";
    cin >> n;
    cout << a << " " << b << " ";
    while (i < n - 2)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
        i++;
    }
    return 0;
}