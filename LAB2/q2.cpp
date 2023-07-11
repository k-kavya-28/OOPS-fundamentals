#include <iostream>
using namespace std;
int main()
{
    int i;
    float k = 10;
    // SERIES 1
    for (i = 10; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    // SERIES 2
    for (i = 1; i <= 10; i++)
    {
        cout << i * 2 << " ";
    }
    cout << endl;
    // SERIES 3
    for (i = 1; i <= 4; i++)
    {
        cout << k << " ";
        k += 3.5;
    }
    return 0;
}