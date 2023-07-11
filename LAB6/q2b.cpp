#include <iostream>
using namespace std;
class matrix
{
    int **mat, row, column;

public:
    matrix() {}
    matrix(int r, int c) : row(r), column(c)
    {
        mat = new int *[row];
        for (int i = 0; i < row; i++)
            mat[i] = new int[column];
    }
    ~matrix()
    {
        for (int i = 0; i < row; i++)
            delete mat[i];
        delete[] mat;
    }
    void getdata()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << endl
                     << "Enter [" << i << "][" << j << "]: ";
                cin >> mat[i][j];
            }
        }
    }
    void show()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
                cout << mat[i][j] << ' ';
            cout << endl;
        }
    }
    friend matrix operator*(matrix m1, matrix m2)
    {
        if (m1.column == m2.row)
        {
            matrix result(m1.row, m2.column);
            int temp;
            for (int i = 0; i < m1.row; i++)
            {
                for (int j = 0; j < m2.column; j++)
                {
                    temp = 0;
                    for (int k = 0; k < m1.column; k++)
                        temp += m1.mat[i][k] * m2.mat[k][j];
                    result.mat[i][j] = temp;
                }
            }
            return result;
        }
        else
        {
            cout << endl
                 << "Matrix multiplication not possible dimension mis-match.";
            exit(0);
        }
    }
};
int main()
{
    int r, c;
    cout << "Enter dimensions of Matrix 1: ";
    cin >> r >> c;
    matrix mat1(r, c);
    cout << endl
         << "------Entering Matrix 1------" << endl;
    mat1.getdata();
    cout << endl
         << "Enter dimensions of Matrix 2: ";
    cin >> r >> c;
    matrix mat2(r, c);
    cout << endl
         << "------Entering Matrix 2------" << endl;
    mat2.getdata();
    cout << endl
         << "------Showing Matrix 1------" << endl;
    mat1.show();
    cout << endl
         << "------Showing Matrix 2------" << endl;
    mat2.show();
    matrix mat3 = mat1 * mat2;
    cout << endl
         << "------Showing Multiplication------" << endl;
    mat3.show();
    return 0;
}