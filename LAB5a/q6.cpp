#include<iostream>
using namespace std;

class num{
    private:
    int n1, n2;
    public:
    void set (int a, int b){
        n1 = a;
        n2 = b;
        cout<<"num1 and num2 are: "<<n1<<" and "<<n2<<endl;
    }

    friend int max(int , int );
};

int temp;
int max(int a, int b){
        if(a > b){
            temp = a;
        }
        else{
            temp = b;
        }
        cout<<"Greatest: "<< temp <<endl;
    }

int main()
{   
    int* arr1;
    arr1 = new int[col];

    int** arr2;
    arr2 = new int*[n];
    for(i=0; i<n; i++){
        arr[i]= new int[row];
    }

    int*** arr3;
    arr3 = new int**[n];
    for(i=0; i<n; i++){
        arr[i] = new int*[n];
        for(j=0;j<row; j++){
           arr[i][j] = new int[n]; 
        }
    }


    num op;
    op.set(1,2);
    max(1,2);


 return 0;
}