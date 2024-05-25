#include<iostream> 
using namespace std;
class matrix2;
 class matrix1 
 
{ 
 int a[5][5]; 
 int m,n;
 public: 
 void getmatrix1();
 void putmatrix1();
 friend void matrixsum(matrix1,matrix2);
 friend void matrixsub(matrix1,matrix2);
 friend void matrixmul(matrix1,matrix2);
};
void matrix1::getmatrix1() 
{ 
 int i,j;
 cout<<"MATRIX 1:\n";
 cout<<"Rows and Columns: ";
 cin>>m>>n;
 cout<<"Enter elements:\n";
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 cin>>a[i][j];
} 
 
void matrix1::putmatrix1() 
 
{ 
 int i,j;
 cout<<"MATRIX 1:\n";
 for(i=0;i<m;i++)
 { 
 for(j=0;j<n;j++)
 cout<<a[i][j]<<" ";
 cout<<endl;
 } 
} 
class matrix2 
{ 
 int b[5][5];
 int m,n;
public: 
 void getmatrix2();
 void putmatrix2();
 friend void matrixsum(matrix1,matrix2);
 friend void matrixsub(matrix1,matrix2);
 friend void matrixmul(matrix1,matrix2);
};
 
void matrix2::getmatrix2() 
{ 
 int i,j;
 cout<<"MATRIX 2:\n";
 cout<<"Rows and Colums: ";
 cin>>m>>n;
 cout<<"Enter elements:\n";
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 cin>>b[i][j];
} 
void matrix2::putmatrix2() 
{ 
 int i,j;
 cout<<"MATRIX 2:\n";
 for(i=0;i<m;i++)
 { 
 for(j=0;j<n;j++)
 cout<<b[i][j]<<" ";
 cout<<endl;
 } 
} 
void matrixsum(matrix1 g,matrix2 h) 
{ 
 int i,j;
 if(g.m==h.m && g.n==h.n) 
 { 
 cout<<"SUM OF MATRICES:\n";
 for(i=0;i<g.m;i++)
 { 
 for(j=0;j<g.n;j++)
 cout<<g.a[i][j]+h.b[i][j]<<" ";
 cout<<endl;
 } 
 } 
 else 
 cout<<"Dimensions are not same...Addition not possible";
} 
void matrixsub(matrix1 g,matrix2 h) 
{ 
 int i,j;
 if(g.m==h.m && g.n==h.n) 
 { 
 cout<<"SUBTRACTION OF MATRICES:\n";
 for(i=0;i<g.m;i++)
 { 
 for(j=0;j<g.n;j++)
 cout<<g.a[i][j] - h.b[i][j]<<" ";
 cout<<endl;
 } 
 } 
 else 
 cout<<"Dimensions are not same...Addition not possible";
} 
void matrixmul(matrix1 g,matrix2 h) 
{ 
 int i,j;
double mul[i][j];
 if(g.m==h.m && g.n==h.n) 
 { 
 cout<<"MULTIPLICATION OF MATRICES:\n";
 for(i=0;i<g.m;i++)
 { 
 for(j=0;j<g.n;j++)
 { 
 mul[i][j]=0;
 for(int k =0; k<g.n ; k++)
 { 
 mul[i][j]+= g.a[i][k] * h.b[k][j];
} 
 cout<<endl;
} 
 } 
 for(int i =0 ; i<g.m;i++)
 { 
 for(int j =0; j<h.n;j++)
 { 
 cout<<mul[i][j]<<" ";
 } 
 cout<<endl;
 
 } 
 } 
 else 
 cout<<"Dimensions are not same...Addition not possible";
} 
int main() 
{ 
 matrix1 m1;
 matrix2 m2;
 m1.getmatrix1(); 
 m2.getmatrix2();
 m1.putmatrix1(); 
 m2.putmatrix2();
 matrixsum(m1,m2);
 matrixsub(m1,m2);
 matrixmul(m1,m2);
 return 0;
} 
