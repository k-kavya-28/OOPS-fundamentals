#include<iostream>
using namespace std;

class student{
    
    private:
    string name;
    int rollno;
    int marks;

    public:
    void setStudent(string s, int r, int m){
        name = s;
        rollno = r;
        marks = m;
    }

    void getStudent(){
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

};

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    student arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter name, roll_no and marks: ";
        string s;
        int r, m;
        cin>>s>>r>>m;
        arr[i].setStudent(s,r,m);
        
    }

    for(int j=0; j<n; j++){
        arr[j].getStudent();
    }


 return 0;
}