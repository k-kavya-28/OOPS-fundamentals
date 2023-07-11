#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "The prime numbers are: " << endl;
    for (i = 2; i <= 300; i++)
    {
        int flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
            else
                continue;
        }
        if (flag == 0)
            cout << i <<" ";
    }
    return 0;
}