#include <iostream>
#include <string.h>
using namespace std;
class Str
{
    char *s;

public:
    Str(const char *a)
    {
        s = new char[strlen(a) + 1];
        strcpy(s, a);
    }
    bool operator==(Str s1)
    {
        if (strcmp(s, s1.s) == 0)
            return 1;
        return 0;
    }
    void operator+(Str s1)
    {
        strcat(s, s1.s);
    }
    void show()
    {
        cout << s;
    }
};
int main()
{
    char c[20];
    cout << "Enter first string: ";
    cin.get(c, 20);
    cin.ignore();
    Str s1(c);
    cout << "Enter second string: ";
    cin.get(c, 20);
    cin.ignore();
    Str s2(c);
    cout << "Enter third string: ";
    cin.get(c, 20);
    Str s3(c);
    s1.show();
    cout << " == ";
    s2.show();
    cout << " : " << (s1 == s2);
    cout << endl;
    s1.show();
    cout << " == ";
    s3.show();
    cout << " : " << (s1 == s3);
    cout << endl;
    s1.show();
    cout << " + ";
    s2.show();
    cout << " : ";
    s1 + s2;
    s1.show();
}
