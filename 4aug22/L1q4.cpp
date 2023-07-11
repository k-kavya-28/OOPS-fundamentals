// 4. Write a C++ program to print prime no of 1 to 300 numbers.
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"The prime numbers till 300 are: ";
    for(i=2;i<=300;i++)
    {
        int temp =0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                temp=1;
            }
        }
        if(temp!=1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}