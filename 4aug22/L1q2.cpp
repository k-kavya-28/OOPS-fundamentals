// 2. WAP to input an integer, decimal and character and display it.
#include <iostream>
using namespace std;
int main()
{
  int Integer;
  char Character;
  float InputFloat;
 
  cout<<" Please Enter a Character :  ";
  cin>>Character;
  
  cout<<" Please Enter an Integer Value :  ";
  cin>>Integer;
  
  cout<<" Please Enter Float Value :  ";
  cin>>InputFloat;    
  
  cout<<" \n The Integer Value that you Entered is :  "<< Integer;
  cout<<" \n The Character that you Entered is :  "<< Character;
  cout<<" \n The Float Value with precision 2 is :  "<< InputFloat;

  return 0;
}
