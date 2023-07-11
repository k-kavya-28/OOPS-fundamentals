// CODE
#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;

public:
    void set(int f, float i)
    {
        feet = f;
        if (i >= 12)
        {
            feet += i / 12;
            int tmpin = (int)i;
            inches = (tmpin % 12) + i - tmpin;
        }
        else
            inches = i;
    }
    void disp()
    {
        cout << feet << " feet " << inches << " inches" << endl
             << endl;
    }
    Distance add(Distance obj)
    {
        Distance temp;
        temp.inches = inches + obj.inches;
        temp.feet = feet + obj.feet;
        temp.set(temp.feet, temp.inches);
        return temp;
    }
};
int main()
{
    Distance obj1;
    Distance obj2;
    int f;
    float i;
    cout << "Enter feet of distance 1: ";
    cin >> f;
    cout << "Enter inches of distance 1: ";
    cin >> i;
    obj1.set(f, i);
    cout << "Enter feet of distance 2: ";
    cin >> f;
    cout << "Enter inches of distance 2: ";
    cin >> i;
    obj2.set(f, i);
    Distance obj3 = obj1.add(obj2);
    cout << "Displaying Values" << endl;
    cout << "Distance 1" << endl;
    obj1.disp();
    cout << endl
         << endl;
    cout << "Distance 2" << endl;
    obj2.disp();
    cout << endl
         << endl;
    cout << "Sum: " << endl;
    obj3.disp();
    cout << endl
         << endl;
    return 0;
}