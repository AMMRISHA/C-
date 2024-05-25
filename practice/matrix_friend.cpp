#include<iostream>

using namespace std;
class matrix2;
class matrix1 { 
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
		
	cout<<"enter your rows and columns:";
	cout<<"rows:";
	cin>>m;
	cout<<"columns:";
	cin>>n;
	cout<<"Enter elements:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}


void matrix1::putmatrix1()
{
	int i,j;
cout<<"Matrix1:"<<endl;

for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<"\t"<<a[i][j]<<"\t";
	}
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
	int i , j;
	cout<<"Enter the number of rows and columns for matrix2:";
	cin>>m>>n;
	cout<<"Enter the number of elements:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cin>>b[i][j];	
		}
	}
}

void matrix2::putmatrix2()
{
	int i,j;
	cout<<"Elements of the Matrix2\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void matrixsum(matrix1 g , matrix2 h)
{
	if(g.m == h.m && g.n == h.n)
	{
		cout<<"After addition"<<endl;
		for(int i=0;i<g.m ;i++)
		{
			for(int j=0;j<g.n;j++)
			{
				cout<<"\t"<<g.a[i][j] + h.b[i][j]<<"\t";
			}
			cout<<endl;
			}	
	}
	else
	{
		cout<<"\ndimensions are note same addition not possible\n"	;
	}	
}

void matrixsub(matrix1 g , matrix2 h)
{
	if(g.m == h.m && g.n == h.n )
	{
			cout<<"After sub"<<endl;
		for(int i=0;i<g.m;i++)
		{
			for(int j=0;j<g.n;j++)
			{
				cout<<"\t"<<g.a[i][j] - h.b[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
		else
	{
		cout<<"\ndimensions are note same subtraction not possible\n";	
	}
}

void matrixmul(matrix1 g , matrix2 h)
{
	double mul[20][20];
	if(g.m == h.m && g.n == h.n)
	{
		cout<<"\nMatrix Multiplication:\n";
		for(int i=0;i<g.m;i++)
		{
			for(int j=0;j<g.n;j++)
			{
				for(int k=0;k<g.n;k++)
				{
					mul[i][j]+=g.a[i][j] * h.b[i][j];
				}
				
			}
			
		}
		
		for(int i=0;i<g.m;i++)
		{
			for(int j=0;j<h.n;j++)
			{
				cout<<"\t"<<mul[i][j]<<"\t";
				
			}
			cout<<endl;
		}
	}
}

int main()
{
	matrix1 m1;
	matrix2 m2;
	m1.getmatrix1();
	m1.putmatrix1();
	m2.getmatrix2();
	m2.putmatrix2();
	matrixsum(m1,m2);
	matrixsub(m1,m2);
	matrixmul(m1,m2);
	return 0;
}
