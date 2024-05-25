#include<iostream>
#include<fstream>

using namespace std;


int main()
{
	ofstream fout;
	fout.open("COUNTRY");
	fout<<"India\n";
	fout<<"Bangladesh\n";
	fout<<"United states of America\n";
	fout<<"UNited Kingdom\n";
	fout<<"South Korea\n";
	
	fout.close();
	
	fout.open("CAPITAL");
	fout<<"New Delhi\n";
	fout<<"Dhaka\n";
	fout<<"Washington\n";
	fout<<"London\n";
	fout<<"seoul\n";
	fout.close();
	//reading input
	const int N = 80;
	char line[N];
	ifstream fin;
	fin.open("COUNTRY");
	cout<<"Contents of country:\n";
	
	while(fin)
	{
		fin.getline(line , N);
		cout<<line<<endl;
		
	}
	fin.close();
	fin.open("CAPITAL");
	cout<<"Contents of capital:\n";
	
	while(fin)
	{
		fin.getline(line , N);
		cout<<line<<endl;
		
	}
	fin.close();
	
	return 0;
}
