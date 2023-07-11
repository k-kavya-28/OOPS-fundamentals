#include <iostream>
#include <math.h>
using namespace std;
double area(double a) { return (a * a * sqrt(3) / 4); }
double area(double a, double b) { return (a * b / 2); }
double area(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    return (sqrt(s * (s - a) * (s - b) * (s - c)));
}
int main()
{
    double x, y;
    cout << "Enter side of an equilateral triangle: ";
    cin >> x;
    cout << endl
         << "Area: " << area(4);
    cout << endl
         << "Enter two sides of a right angled triangle: ";
    cin >> x >> y;
    cout << endl
         << "Area: "
         << " " << area(x, y);
    cout << endl
         << "Enter two sides of an isoscles triangle: ";
    cin >> x >> y;
    cout << endl
         << "Area: "
         << " " << area(x, x, y);
}