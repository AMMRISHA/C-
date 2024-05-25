#include<iostream> 
using namespace std;
class Matrix 
{ 
private: 
int i,j,k,M1[3][3],M2[3][3],r,result[3][3];
public: 
 void create();
 void ADD();
 void Subtraction();
 void Multiplication();
};
void Matrix:: create() 
{ 
cout<<"Enter the values of First matrix"<< endl;
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
cout<<" Enter the number of "<<i+1<<" Row and "<<j+1<<" Column\t";
cin>>M1[i][j];
} 
} 
cout<<"\tEnter the values of Second Matrix"<<endl;
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
cout<<"Enter the number of "<<i+1<<"Row and "<<j+1<<"Column\t";
cin>>M2[i][j];
} 
} 
cout<<"The values of First Matirx is"<<endl;
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
cout<<M1[i][j]<<"\t";
} 
cout<<endl;
} 
cout<<"The values of Second Matirx is"<<endl;
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
cout<<M2[i][j]<<"\t";
} 
cout<<endl;
} 
} 
void Matrix::ADD() 
{ 
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
result[i][j]=M1[i][j]+M2[i][j];
} 
} 
cout<<endl<<"The Addtion of these two Matrix are as follows…"<<endl;
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
cout<<"\t"<<result[i][j]<<"\t";
} 
cout<<endl;
} 
} 
void Matrix::Subtraction() 
{ 
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
result[i][j]=M1[i][j]-M2[i][j];
} 
} 
cout<<endl<<"The Subtraction of these two Matrix are as follows…"<<endl;
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
cout<<"\t"<<result[i][j]<<"\t";
} 
cout<<endl;
} 
} 
void Matrix:: Multiplication() 
{ 
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
result[i][j]=0;
} 
} 
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
for(k=0;k<3;k++)
{ 
r=M1[i][k]*M2[k][j];
result[i][j]=result[i][j]+r;
} 
} 
} 
cout<<endl<<"The Multiplication of these two Matrix are as follow…"<<endl;
for( i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
{ 
cout<<"\t"<<result[i][j]<<"\t";
} 
cout<<endl;
} 
} 
int main() 
{ 
	int choice , n;
	Matrix mrt;
	
	while(1)
	{
		cout<<"Enter '1' for create two matrix \n";
		cout<<"Enter '2' for add two matrix \n";
		cout<<"Enter '3' for sub two matrix\n";
		cout<<"Enter '4' for mul two matrix \n";
		cout<<"Enter your choice:";
		cin>>choice;
			switch(choice)
			{
				case 1: mrt.create();
						break;
				case 2: 
						cout<<"hello";
						mrt.ADD();
						break;
				case 3:mrt.Subtraction();
						break;
				case 4:mrt.Multiplication();
						break;
				case 0:exit(0);
				default: cout<<"\n invalid choice!!!";
				
			}
			
	}
	return 0;		
} 
