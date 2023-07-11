// CODE
#include <iostream>
using namespace std;
class bank
{
    char name[20];
    int accno;
    char type[20];
    float bal;

public:
    void setdata()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> accno;
        cout << "Enter Account Type: ";
        cin >> type;
        cout << "Enter bal: ";
        cin >> bal;
        cout << endl;
    }
    void deposit()
    {
        int d;
        cout << "Enter amount deposited: ";
        cin >> d;
        bal += d;
    }
    void withdraw()
    {
        int w;
        char c;
        cout << "The balance amount is : " << bal << endl;
        cout << "Do you want to withdraw?(Y/N): ";
        cin >> c;
        if (c == 'Y')
        {
            cout << "Enter amount to withdraw: ";
            cin >> w;
            bal -= w;
            cout << endl;
        }
        else
            cout << "THANK YOU!" << endl
                 << endl;
    }
    void getdata()
    {
        cout << "THANK YOU!" << endl
             << endl;
        cout << "The data of the user is as follows\n"
             << "Acc no: "<<accno<<endl<<" Name : "<<name<<endl<<" Balance : "<<bal<<endl<<endl; 
    }
};
int main()
{
    bank obj;
    obj.setdata();
    obj.deposit();
    obj.withdraw();
    obj.getdata();
    return 0;
}