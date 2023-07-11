#include<iostream>
using namespace std;
int count = 0;
class test
{
    public:
    test(){
        count++;
        cout<<"no of object created: "<<count<<endl;
    }
    ~test(){
        cout<<"no of object destroyed: "<<count<<endl;
        count--;
    }
};
int main()
{
    test t1,t2,t3,t4;
    return 0;
}