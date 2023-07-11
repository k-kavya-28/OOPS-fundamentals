#include<iostream>
using namespace std;

class triangle{
    private:
    int s1,s2,s3;

    public:
    triangle(int a, int b, int c){
        s1=a;
        s2=b;
        s3=c;
    }

    void show(){
        cout<<"s1: "<<s1<<endl;
        cout<<"s2: "<<s2<<endl;
        cout<<"s3: "<<s3<<endl;
    }

    void check(){
        if(this->s1 == this->s2 && this->s2 == this->s3)
            cout<<"The Given Triangle is equilateral"<<endl;
        else if(this->s1 == this->s2 || this->s2 == this->s3 || this->s3 == this->s1)
            cout<<"The given Triangle is isosceles"<<endl;
        else
            cout<<"The given Triangle is scalene"<<endl;
    }
};

int main()
{
    triangle x(1,2,3);
    triangle y(3,3,5);
    triangle z(2,2,2);
    x.show();
    y.show();
    z.show();
    x.check();
    y.check();
    z.check();

 return 0;
}