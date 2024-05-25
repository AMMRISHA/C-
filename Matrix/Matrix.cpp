#include<iostream>

using namespace std;

class Matrix

{

private:

int i,j,k,M1[3][3],M2[3][3],r,result[3][3];

public:

void create()

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

void ADD()

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

void Subtraction()

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

void Multiplication()

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

};

int main()
{

Matrix a;

a.create();

a.ADD();

a.Subtraction();

a.Multiplication();

}
