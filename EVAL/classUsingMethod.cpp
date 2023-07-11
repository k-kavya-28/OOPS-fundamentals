// example of C++ class where we are storing and displaying employee information using method.
#include <iostream>
using namespace std;

class emp
{
    public:
    string name;
    int id;
    float salary;

    void getEmp(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void dispEmp(){
        cout<<"Name is : "<<name<<endl;
        cout<<"ID is : "<<id<<endl;
        cout<<"Salary is : "<<salary<<endl;
    }
};
int main()
{
    emp e1,e2;
    e1.getEmp("ashish gunjan", 1, 100000);
    e2.getEmp("Anand", 2, 200000);
    e1.dispEmp();
    e2.dispEmp();
    return 0;
}