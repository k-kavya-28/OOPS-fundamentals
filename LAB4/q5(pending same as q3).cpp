#include<iostream>
using namespace std;

class distance{
    private:
    int feet;
    float inches;

    public:
    void set(int f, float i){
        feet = f;
        inches = i;
    }

    void disp(){
        cout<<"feet: "<<this->feet<<endl;
        cout<<"inches: "<<this->inches<<endl;
    }

    
};

int main()
{
 return 0;
}