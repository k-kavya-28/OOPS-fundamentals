#include<iostream>
using namespace std;

class abc
{
    public:
    abc (){
        cout<<"constructor invoked"<<endl;
    }

    ~ abc (){
        cout<<"destructor invoked"<<endl;
    }
};
int main()
{
    abc k,l;
 return 0;
}