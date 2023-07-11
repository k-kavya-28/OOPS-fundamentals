#include<iostream>
using namespace std;

class Rectangle{
    private:
    float length;
    float width;

    public:
    void setlength(float l){
        length = l;
    }


    void setwidth(float w){
        width = w;
    }

    float perimeter(float l, float w){
        float p;
        p=2*(l+w);
        cout<<"Perimeter: "<<p<<endl;
        return p;
    }

    float area(float l, float w){
        float ar;
        ar=l*w;
        cout<<"Area: "<<ar<<endl;
        return ar;
    }

    void getLengthWidth(){
        cout<<"Length: "<<this->length<<endl;
        cout<<"Width: "<<this->width<<endl;
    }

    int sameArea(Rectangle Y){
        if(this->area(5,2.5) == Y.area(5,18.9)){
            cout<<"Same";
        }
        else{
            cout<<"Not Same";
        }
    }
};

int main()
{
    Rectangle X,Y;
    X.setlength(5);
    X.setwidth(2.5);
    Y.setlength(5);
    Y.setwidth(18.9);
    X.getLengthWidth();
    Y.getLengthWidth();
    X.perimeter(5,2.5);
    X.area(5,2.5);
    Y.perimeter(5,18.9);
    Y.area(5,18.9);
    X.sameArea(Y);

 return 0;
}