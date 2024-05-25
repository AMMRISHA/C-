#include<iostream>
#include<fstream>

using namespace std;
int main()

{
	string st = "Hello Ammrisha";
	
	ofstream outfile("abc.txt");
	out<<st;
	return 0;
}