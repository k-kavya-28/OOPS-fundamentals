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

    ~student(){
        cout<<"Destructor called"<<endl;
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

    //operator overloading
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main(){

    // student a;
    // a.name = 'Kavya';
    // a.age = 20;
    // a.gender = 1;

    student arr[3]; //defined array of 3 objects
    //now we will take the values from the user using loop
    for(int i=0;i<3;i++){
        string s;
        cout<<"Enter name: ";
        // cin>>arr[i].name;
        cin>>s;
        arr[i].setName(s);
        cout<<"Enter age: ";
        cin>>arr[i].age;
        cout<<"Enter gender: ";
        cin>>arr[i].gender;
    }

    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }

    student a("Urvi", 20, 1);
    a.printInfo();
    // student b;
    student b("Rahul", 20, 1);
    //copy constructor
    // student c(a);    
    student c = a;

    if (c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }


    if (b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }


    return 0;
}