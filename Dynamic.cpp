#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	
	cout<<"Enter the array size:";
	cin>>size;
	cout<<"Creating an array og size:";
	arr = new int[size];
	cout<<arr;
	cout<<arr -1;
	cout<<"successful";
	
	delete arr;
		
}
