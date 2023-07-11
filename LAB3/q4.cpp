// CODE
#include <iostream>
using namespace std;
void add(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cout << "The Base Address of Array is: " << a + i << endl;
        else
            cout << "The Address of Element " << i << " is: " << a + i << endl;
    }
}
void sum(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(a + i);
    }
    cout << "The sum is: " << sum << endl
         << endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " of the array: ";
        cin >> a[i];
    }
    sum(a, n);
    cout << "Printing Addresses: " << endl
         << endl;
    add(a, n);
    return 0;
}