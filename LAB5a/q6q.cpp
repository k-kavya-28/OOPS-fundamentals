// #include <iostream>
// using namespace std;
// class two; // friend class has to be declared befoer the actual class. its definition may be written after the class.class one
// {
//     int n;

// public:
//     friend void getdata(one &a);
//     friend void greaterr(one, two);
// };
// class two
// {
//     int m;

// public:
//     friend void getdata(two &a);
//     friend void greaterr(one, two);
// };
// void getdata(one &a)
// {
//     cout << "Enter the no.";
//     cin >> a.n;
// }
// void getdata(two &a)
// {
//     cout << "Enter the no.";
//     cin >> a.m;
// }
// void greaterr(one a, two b)
// {
//     if (a.n > b.m)
//         cout << "Greater no. is " << a.n << " of object one" << endl;
//     else if (a.n == b.m)
//         cout << "both no. are equal" << endl;
//     else
//         cout << "Greater no. is " << b.m << " of object two" << endl;
// }
// int main()
// {
//     one a;
//     two b;
//     getdata(a);
//     getdata(b);
//     greaterr(a, b);
// }

#include<iostream>
using namespace std;
int main()
{
    string s,t,q,k,j,a,d,aa;
    getline(cin,s);
    getline(cin,t);
    getline(cin,q);
    getline(cin,k);
    getline(cin,j);
 return 0;
}