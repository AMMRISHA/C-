#include<iostream>

using namespace std;

int main()
{
	int count =0;
	char c;
	
	cout<<"Enter the character:";
	cin.get(c);
	while(c != '\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	
	}
	
	cout<<"Number of character is : "<<count;
	return 0;
}
