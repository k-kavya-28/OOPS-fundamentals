// Que 5: Write a Program to design a class having static member function named show_count()
// which has the property of displaying the number of objects created of the class.

#include<bits/stdc++.h>
#include<vector>
using namespace std;
class cntobj
{
   static int count;
   public:
      cntobj()
      {
         count++;
      }
      void no_of_objects()
      {
         cout<<"no. of objects: "<<count<<endl;
      }

};
int cntobj :: count=0;
int main()
{
   cntobj p,q,r,s,t;
   p.no_of_objects();
}