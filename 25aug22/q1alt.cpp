//Make a class called circle. Make an inline function called area. (It should be outside of the class)

#include<iostream>

using namespace std;

inline float Area(float radius)
{
    return 3.1415 * radius * radius;
}
int main()
{

  
  float radius;
  cout<<"Enter Radius of circle=";
  cin>>radius;
  cout<<"Area of circle using Inline Function is : "<<Area(radius);
  return 0;

}

/*
OUTPUT of the program Inline Functions in C++
Enter Radius of circle=5.25
Area of circle using Inline Function is : 86.5876
--------------------------------
Process exited after 28.59 seconds with return value 0
Press any key to continue . . .


*/