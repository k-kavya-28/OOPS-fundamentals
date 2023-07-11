#include<iostream>
using namespace std;

class tareekh{

    private:
    int date,month,year;

    public:

    tareekh(int dd, int mm, int yy){
        date = dd;
        month = mm;
        year = yy;
    }

    void printTareekh(){
        cout<<"Tareekh entered is: "<<date<<"/"<<month<<"/"<<year<<endl;
    }

    void validityCheck(int dd, int mm, int yy){
        if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12 && dd>0 && dd<=31){
            cout<<"Valid date"<<endl;
        }
        else if(mm==4 || mm==6 || mm==9 || mm==11 && dd>0 && dd<=30){
            cout<<"Valid date"<<endl;
        }
        else if(mm==2){
            if(dd>0 && dd<=29 && yy%4==0){
                cout<<"Valid date and a leap year!"<<endl;
            }
            else if(dd>0 && dd<=28){
                cout<<"Valid date"<<endl;
            }
            else{
                cout<<"Invalid date"<<endl;

            }
        }
        else{
            cout<<"Invalid date";
        }
    }
};

int main()
{
    cout<<"Enter tareekh(in dd mm yy format): "<<endl;
    int dd, mm, yy;
    cin>>dd>>mm>>yy;
    tareekh A(dd,mm,yy);
    A.printTareekh();
    A.validityCheck(dd,mm,yy);


 return 0;
}