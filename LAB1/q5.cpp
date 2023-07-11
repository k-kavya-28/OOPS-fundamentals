#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout <<"Input temperature in Celsius: ";
    cin >>a;
    b = 9 * a / 5 + 32;
    cout << b << " degrees is the temperature in Farenheit." << endl;
    return 0;
}
