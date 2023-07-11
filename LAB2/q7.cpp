// CODE
#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j, sum;
    cout << "Enter the number of rows of the array: ";
    cin >> m;
    cout << "Enter the number of columns of the array: ";
    cin >> n;
    int mat[m][n];
    // Entering Matrix
    for (i = 0; i < m; i++)
    {
        cout << "Entering elements of row " << i << endl;
        for (j = 0; j < n; j++)
        {
            cout << "Enter in column " << j << ": ";
            cin >> mat[i][j];
        }
    }
    // Printing Matrix
    cout << "THE MATRIX IS AS FOLLOWS" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    // Processing Matrix
    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum += mat[i][j];
        }
        cout << sum <<" is the sum of elements in row "<<i<<"."<<endl; } 
                       return 0;
    }