//DEFAULT CONSTRUCTOR
// #include <iostream>  
// using namespace std;  
// class Employee  
//  {  
//    public:  
//         Employee()    
//         {    
//             cout<<"Default Constructor Invoked"<<endl;    
//         }    
// };  
// int main(void)   
// {  
//     Employee e1; //creating an object of Employee   
//     Employee e2;   
//     return 0;  
// }  

//PARAMETERISED CONSTRUCTOR
#include<iostream>
using namespace std;

class student 
{
    public:
    int id;
    string name;

    student (int i, string n){
        id = i;
        name = n;
    }

    void display(){
        cout<<id<<" "<<name<<endl;
    }


};
int main()
{
    student s1 = student(1, "Khushi Kavya");
    student s2 = student(2,"Jassika");
    s1.display();
    s2.display();
    return 0;
}