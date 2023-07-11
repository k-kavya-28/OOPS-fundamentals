// Que 4: Write a C++ program to demonstrate the static and non static variable usage defining
// them within a function.

#include<bits/stdc++.h>
#include<vector>
using namespace std;
class printer
{
   int x;
   static int count;
   public:
   void print()
   {
      count++;
   }
   void disp()
   {
      cout<<"No. of prints: "<<count<<endl;
   }
};
int printer :: count=0;
int main()
{
   
   printer p,q,r;
   p.print();
   p.disp();
   q.print();
   q.disp();
   r.print();
   r.disp();
   p.print();
   p.disp();
}
