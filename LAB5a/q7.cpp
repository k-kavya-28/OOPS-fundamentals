#include <iostream>
using namespace std;
class numbers
{
    int a;
    int b;

public:
    friend void sum(numbers);
    void get_data()
    {
        cout << "Enter the two numbers : " << endl;
        cin >> a >> b;
    }
};
void sum(numbers obj)
{
    cout << "sum= " << obj.a + obj.b << endl;
}
int main()
{
    numbers obj;
    obj.get_data();
    sum(obj);
}