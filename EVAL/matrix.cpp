#include<iostream>
using namespace std;

class matrix{
    private:
    int row,col;
    int** arr; 
    //object has 3 data members row,col and matrix/arr

    public:
    matrix(int r, int c){
        row = r;
        col = c;
        arr = new int*[c];
        for(int i=0;i<row;i++){
            arr[i] = new int[r];
        }
    }

    void entermatrix(){
        cout<<"Enter elements: "<<endl;
        for(int k=0; k<this->col; k++){
           for(int j=0;j<this->row;j++){
                int a;cin>>a;
                this->arr[k][j] = a;
           }
        }
    }

    void disp(){
        cout<<"Entered matrix is: "<<endl;
        for(int p=0; p<col; p++){
            for(int q=0; q<row; q++){
                cout<<this->arr[p][q];
            }
            cout<<endl;
        }
    }

    matrix transpose(){

            matrix temp(this->row,this->col);
            for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                 temp.arr[i][j] = this->arr[j][i] ; 
            }
        }
        return temp;

    }
};

int main()
{
    matrix A(2,2);
    matrix transpose = A.transpose();
    A.entermatrix();
    A.disp();
    transpose.disp();



 return 0;
}