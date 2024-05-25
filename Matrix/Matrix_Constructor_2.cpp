#include<iostream>
using namespace std;

class MATRIX{
    private:
    int a[10][10];
    int row, col;


    public:
    MATRIX(){}
    MATRIX(int m[10][10], int r, int c);
    void display();
    MATRIX addition(MATRIX M2);
    MATRIX subtraction(MATRIX M2);
    MATRIX multiplication(MATRIX M2);
};

MATRIX:: MATRIX(int m[10][10], int r, int c)
{
    row = r, col = c;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            a[i][j] = m[i][j];
        }
    }
}

MATRIX MATRIX :: addition(MATRIX M2)
{
    MATRIX t;
    t.row = M2.row;
    t.col = M2.col;
    for(int i = 0; i < t.row; i++)
    {
        for(int j = 0; j < t.col; j++)
        {
            t.a[i][j] = a[i][j] + M2.a[i][j];
        }
    }

    return t;
}

MATRIX MATRIX :: subtraction(MATRIX M2)
{
    MATRIX t;
    t.row = M2.row;
    t.col = M2.col;
    for(int i = 0; i < t.row; i++)
    {
        for(int j = 0; j < t.col; j++)
        {
            t.a[i][j] = a[i][j] - M2.a[i][j];
        }
    }

    return t;
}


void MATRIX :: display()
    {
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << "\n";
        }
    }

MATRIX MATRIX :: multiplication(MATRIX M2)
{
    if(col == M2.row)
    {
        MATRIX t;
        t.row = row;
        t.col = M2.col;
        for(int i = 0; i < t.row; i++)
        {
            for(int j = 0; j < t.col; j++)
            {
                t.a[i][j] = 0;
                for(int k = 0; k < M2.col; k++)
                {
                    t.a[i][j] += a[i][k] * M2.a[k][j];
                }
            }
        }

        return t;
    }
    else
    {
        cout << "\ncannot multiply\n";
    }
}

int main()
{
    int r, c, i, j;
    int m[10][10];
    cout << ("Enter the size of the row: \n");
    cin >> r;
    cout << ("Enter the size of the column: \n");
    cin >> c;

  

    cout << "\nInput for first matrix:\n";
    for(i = 0; i < r; i++)
    { 
        for(j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }
    MATRIX m1(m, r, c);

    
    cout << "\nInput for second matrix:\n";
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }
    MATRIX m2(m, r, c), m3,m5, m4;
    cout << "matrix 1:\n";
    m1.display();
    cout << "matrix 2:\n";
    m2.display();

    m3 = m1.addition(m2);
    cout << " Addition of two matrices :\n";
    m3.display();
	
	 m5 = m1.subtraction(m2);
    cout << "Subtraction of two matrices:\n";
    m5.display();
	
    m4 = m1.multiplication(m2);
    cout << "Multiplication of two matrices:\n";
    m4.display();


    return 0;
}
