// 5. Write a C++ program that will ask for a temperature in Celsius and display it in degree 
// Fahrenheit.[F=9C/5+32]
#include<iostream>
using namespace std;
main() {
   float f, c;
   cout << "Enter temperature in Celsius: ";
   cin >> c;
   f = (9.0*c/5.0)+32;
   cout << "Equivalent Fahrenheit temperature is: " << f;
}