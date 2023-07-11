//Make a class called circle. Make an inline function called area. (It should be outside of the class)

#include<iostream>
using namespace std;

class circle
{
    float r;
    public:
        void getdata()
        {
            cin>>"Enter radius:">>r;
        }
        float ar();
};
inline float circle :: ar(){
    return 3.1415 * radius * radius;
}

int main(){
    
}