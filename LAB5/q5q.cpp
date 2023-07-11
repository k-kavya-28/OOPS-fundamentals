#include <iostream>
using namespace std;
class hello
{
    static int count;

public:
    hello()
    {
        count++;
    }
    static void no_of_objects()
    {
        cout << "no. of objects: " << count << endl;
    }
};
int hello ::count = 0;
int main()
{
    hello p, q, r, s, t;
    p.no_of_objects();
    return 0;
}