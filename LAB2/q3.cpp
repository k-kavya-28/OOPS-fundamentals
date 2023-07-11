#include <iostream>
using namespace std;
// CODE 1
// int main()
// {
//     int i;
//     int x, fact = 1;
//     cout << "Enter the number to calculate factorial: ";
//     cin >> x;
//     for (i = 1; i <= x; i++)
//     {
//         fact *= i;
//     }
//     cout << "The factorial of " << x << " is " << fact << ".";
// }
// CODE 2
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int x, fact = 1;
    cout << "Enter the number to calculate factorial: ";
    cin >> x;
    while (i <= x)
    {
        fact *= i;
        i++;
    }
    cout << "The factorial of " << x << " is " << fact << ".";
}