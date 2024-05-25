#include<iostream>

using namespace std;
class Matrix{


	int a[3][3];
	public:

	void display();
	void accept();
	void operator +(Matrix x);
	void operator *(Matrix x);

};

void Matrix::accept()
{

	cout<<"Enter row and column elements:";

	for(int i=0;i<3;i++)

	{

		for(int j=0;j<3;j++)

		{
			cin>>a[i][j];
		}
cout<<endl;

	}

}

void Matrix::display()
{


	cout<<"The matrix is"<<endl;

	for(int i=0;i<3;i++)
	{

		for(int j=0;j<3;j++)
			{
			cout<<"  ";
			cout<<a[i][j]<<"  ";
			
			}
		cout<<endl;
	}

}

//Addition 
void Matrix::operator +(Matrix x)
{

	int mat[3][3];

	for(int i=0;i<3;i++)

	{

		for(int j=0;j<3;j++)
		{
		 mat[i][j]=a[i][j] + x.a[i][j];
		 
		}
	}

	cout<<"\n Addition of matrix:\n\n";

		for(int i=0;i<3;i++)
		{

			for(int j=0;j<3;j++)
				{
				cout<<"  ";
				cout<<mat[i][j]<<"  ";
				
				}
		cout<<endl;
		}



}


//mltiplication


void Matrix::operator *(Matrix x)
{

	int mat[3][3];

	for(int i=0;i<3;i++)

	{

		for(int j=0;j<3;j++)
		{
		 mat[i][j]=a[i][j] * x.a[i][j];
		 
		}

	}

	cout<<"\n Multiplication of matrix:\n\n";

		for(int i=0;i<3;i++)
		{

			for(int j=0;j<3;j++)
				{
				cout<<"  ";
				cout<<mat[i][j]<<"  ";
				
				}
		cout<<endl;

		}



}






int main()
{

	Matrix m,n;
	m.accept();//////////// accepting row
	n.accept();/////////// accepting column
	cout<<"\n First matrix:";
	m.display();
	cout<<"\n Second matrix:";
	n.display();
	m +n;    // operator overloaded
	m*n;

return 0;
}


