// CODE
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th element of the array: ";
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}