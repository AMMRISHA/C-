#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;


int main()
{
	ifstream fin1, fin2;
	fin1.open("COUNTRY");
	fin2.open("CAPITAL");
	
	const int N = 80;
	char line[N];
	
	for(int i=0; i<5 ; i++)
	{
		if(fin1.eof() != 0)	
		{
			cout<<"Exit from country.\n";
			exit(1);
			
		}
		
		fin1.getline(line , N);
		cout<<"capital of  "<<line<<" "<<" is ";
		
		if(fin2.eof()!= 0)
		{
			cout<<"Exit from capital";
			exit(1);
			
		}
		fin2.getline(line, N);
		cout<<line<<endl;
		
		
	}
	return 0;
}
