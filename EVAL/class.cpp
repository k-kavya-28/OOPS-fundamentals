#include<iostream>
using namespace std;
class stud
{
    public:
    int id;
    string name;
    // float salary;
};
int main()
{
    stud s1;
    s1.id = 102118068;
    s1.name = "Khushi Kavya";
    cout<<"ID is : "<<s1.id<<endl;
    cout<<"Name is : "<<s1.name<<endl;
    return 0;
}