#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<map>
using namespace std;
class bank
{
        private:                
        char name[20],account[10],typeofaccount[10];        
        float balance=79898.23;
        float withdraw;
        public:
        void input();
        void display();
                        
                
};
void bank::input()
{
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter account number:";
        cin>>account;
        cout<<"enter the type of the account";
        cin>>typeofaccount;
        cout<<"enter the amount you would like to withdraw"<<endl;
        cin>>withdraw;
}
void bank::display()
{
        float balanceleft=balance-withdraw;
        cout<<"\nName:"<<name;
        cout<<"\naccount number.:"<<account;
        cout<<"\nBalance:"<<balance;
        cout<<"\namount withdrawn: "<<withdraw;
        cout<<"\n balance left: "<<balanceleft;
}

int main(){
    bank b1;
    b1.input();
    b1.display();
    return 0;
}