#include<iostream>
using namespace std;

class cricketer{
    string name;
    int age;
    int testmatches;
    int avgscore;

    public:
    void setCricketer(string n, int a, int m, int s){
        name = n;
        age = a;
        testmatches = m;
        avgscore = s;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Testmatches = ";
        cout<<testmatches<<endl;
        cout<<"Avgscore = ";
        cout<<avgscore<<endl;
    }

    void sort(cricketer arr[]){
    for(int i=0; i<20; i++)
        {		
            for(int j=i+1; j<20; j++)
            {
                if(arr[i].avgscore>arr[j].avgscore)
                {
                    cricketer temp;
                    temp  =arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
};

int main()
{
    cricketer arr[20];
    cricketer temp;
    for(int i=0; i<20; i++){
        string n;
        int a;
        int m;
        int s;

        cout<<"Enter name, age, no. of testmatches, avgscore: ";
        cin>>n>>a>>m>>s;
        arr[i].setCricketer(n, a, m, s);
    }

    arr[0].sort(arr);
    

    for(int i=0;i<20;i++){
        arr[i].printInfo();
    }

 return 0;
}