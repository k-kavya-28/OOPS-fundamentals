#include<iostream>
using namespace std;

class acc{
    private:
    string name;
    int accno;
    string typeacc;
    float bal;

    public:
    void setAcc(string n, int a, string t, float b){
        name = n;
        accno = a;
        typeacc = t;
        bal = b;
    }

    void depositAmt(float amt){
        cout<<"Current bal: "<<this->bal<<endl;
        this->bal=this->bal + amt;
        cout<<"Updated bal: "<<this->bal<<endl;
    }

    void withdrawAmt(float amt){
        cout<<"Current bal: "<<this->bal<<endl;
        this->bal=this->bal - amt;
        cout<<"Updated bal: "<<this->bal<<endl;
    }

    void disp(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<bal<<endl;
    }
};


int main()
{
    string name, typeacc;
    int accno, bal;
    acc X;
    cout<<"Enter name, accno, typeacc, bal: "<<endl;
    cin>>name>>accno>>typeacc>>bal;
    X.setAcc(name, accno, typeacc, bal);

    X.disp();

    X.depositAmt(289.15);

    X.withdrawAmt(19.78);


 return 0;
}