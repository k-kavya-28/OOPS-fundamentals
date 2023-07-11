#include <iostream>
using namespace std;
class number
{
    int arr[200];
    int n;

public:
    void read()
    {
        cout << "Enter the no. of elements :";
        cin >> n;
        cout << "Enter the numbers: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    friend float mean(number); // declaration of a friend function has to bedone in class.definition has to be done outside the class.
};
float mean(number a) // object of the class has to be passed inside a friend function.
{
    float sum = 0;
    for (int i = 0; i < a.n; i++)
    {
        sum = sum + a.arr[i];
    }
    float b = sum / a.n;
    return b;
}
int main()
{
    number n1;
    n1.read();
    cout << "mean of the input numbers is: " << mean(n1);
}