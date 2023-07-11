#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;

public:
    Distance() : meter(0){}; // another way of declaring a constructor in new version of cpp.
        // friend function friend intaddFive(Distance); };
        friend void
        addfive(Distance &A);
    void display()
    {
        cout << "meter= : " << meter << endl;
    }
};
void addfive(Distance &a)
{
    a.meter += 5;
}
int main()
{
    Distance a;
    a.display();
    addfive(a);
    a.display();

    addfive(a);
    a.display();

    addfive(a);
    a.display();
}