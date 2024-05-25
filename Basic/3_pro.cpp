#include<iostream>
using namespace std;
 int result =80;// global variable
int sum()
{
	int a=20, b=40;// local variable
	int result = a+ b;
	return result;	
}

int main()
{
	 int sum();
	cout<< "sum of two numbers a and b is " <<result << endl; // it will be print global variable because we not calling sum();
	cout<< "sum of two numbers a and b is " <<sum(); // it will take  sum() function's results value as local variable because we not calling sum();
	return 0;
}
