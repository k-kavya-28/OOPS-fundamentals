#include <iostream>
using namespace std;
int main()
{
    int n, i, max;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th element of the array: ";
        cin >> arr[i];
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        else
            continue;
    }
    cout << max << " is the greatest element in the array.";
    return 0;
}
