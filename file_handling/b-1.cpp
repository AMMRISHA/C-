#include<iostream>
#include<fstream>

using namespace std;

int main()

{
	string Fname,Lname;
	ofstream outf("abc");
	
	cout<<"Enter your Firstname:";
	cin>>Fname;
	
	cout<<"Enter your Lastname:";
	cin>>Lname;
	
	outf<<Fname;
	outf<<Lname;
	outf.close();
	
	
	ifstream inf("abc");
		inf>>Fname;
		inf>>Lname;
		cout<<"Your first name is"<<Fname;
		cout<<"Your last name is"<<Lname;
	
	
	inf.close();
	return 0;
}
