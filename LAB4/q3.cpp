#include<iostream>
using namespace std;

class complex{
    private:
    float real;
    float img;

    public:
    void set(float r, float i){
        real = r;
        img = i;
    }

    void disp(){
        cout<<this->real<<"+i"<<this->img<<endl;
    }

    complex sum(complex k){
        cout<<this->real + k.real<<"+ i"<<this->img + k.img<<endl;
    }

};


int main()
{
    complex x,y,z;
    float r1,i1,r2,i2;
    cout<<"real and imaginary part(in float) for x: "<<endl;
    cin>>r1>>i1;
    x.set(r1, i1);
    cout<<"real and imaginary part(in float) for y: "<<endl;
    cin>>r2>>i2;
    y.set(r2, i2);
    x.disp();
    y.disp();
    z = x.sum(y);
    z.disp();
    
    return 0;
}