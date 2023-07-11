#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;

    public:
    complex(int r, int i){
        real = r;
        img = i;
    }

    complex add(complex k){
        complex c(this->real + k.real, this->real + k.img);
        return c;
    }

    complex sub(complex t){
        complex m(this->real - t.real, this->real - t.img);
        return m;
    }

    void getComplex(){
        cout<<this->real<<"+i"<<this->real<<endl;
    }

};


int main()
{
    complex a(4,3);
    complex b(1,2);
    a.getComplex();
    b.getComplex();
    complex c = a.add(b);
    complex d = a.sub(b);
    c.getComplex();
    d.getComplex();


 return 0;
}