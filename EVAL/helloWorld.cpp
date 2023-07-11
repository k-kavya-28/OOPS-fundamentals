#include<iostream>
using namespace std;

class student{

    //data members-private and public
    string name;
    public:
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    } //default constructor

    student(string s, int a, int g){
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    } //parameterised constructor

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    //to access the private data member outside the class
    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
};

int main(){

  cout<<"Kavya";
    return 0;
}
