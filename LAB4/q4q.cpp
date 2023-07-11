#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
    void setlength(float l)
    {
        length = l;
    }
    void setwidth(float w)
    {
        width = w;
    }
    float perimeter()
    {
        float p = 2 * (length + width);
        return p;
    }
    float area()
    {
        float a = length * width;
        return a;
    }
    void show()
    {
        cout << "Length: " << length << endl
             << "Width: " << width << endl
             << endl;
    }
    int sameArea(rectangle r)
    {
        float a1 = length * width;
        float a2 = r.length * r.width;
        if (a1 == a2)
            return 1;
        else
            return 0;
    }
};
int main()
{
    float l, w;
    rectangle obj1;
    rectangle obj2;
    cout << "Enter length of rectangle 1: ";
    cin >> l;
    obj1.setlength(l);
    cout << "Enter width of rectangle 1: ";
    cin >> w;
    obj1.setwidth(w);
    cout << "Enter length of rectangle 2: ";
    cin >> l;
    obj2.setlength(l);
    cout << "Enter width of rectangle 1: ";
    cin >> w;
    obj2.setwidth(w);
    cout << "Rectangle 1" << endl
         << "Area= " << obj1.area() << endl
         << "Perimeter= " << obj1.perimeter() << endl
         << endl;
    cout << "Rectangle 2" << endl
         << "Area= " << obj2.area() << endl
         << "Perimeter= "<<obj2.perimeter()<<endl<<endl; 
        int check = obj1.sameArea(obj2);
    if (check == 1)
        cout << "The rectangles have the same area.";
    else
        cout << "The rectangles do not have the same area.";
    return 0;
}