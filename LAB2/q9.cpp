// CODE
#include <iostream>
using namespace std;
int main()
{
    int i;
    char str[30] = "HELLO THERE FRIENDZ";
    for (i = 0; i < 30; i++)
    {
        if (str[i] >= 65 && str[i] <= 92)
        {
            str[i] += 32;
        }
    }
    cout << str;
    return 0;
}