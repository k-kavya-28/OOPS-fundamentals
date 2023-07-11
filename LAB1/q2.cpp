// 2. WAP to input an integer, decimal and character and display it.
#include <iostream>
using namespace std;
int main()
{
    int n;
    char c;
    float d;
    cout << "Input an integer: ";
    cin >> n;
    cout << "Input a character: ";
    cin >> c;
    cout << "Input a decimal: ";
    cin >> d;
    cout << "The values entered are as follows:"<<endl;
    cout<<"Integer :"<< n << endl <<"Character:"<< c << endl <<"Decimal:"<< d <<endl;
    return 0;
}