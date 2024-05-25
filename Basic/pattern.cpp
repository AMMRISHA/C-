#include<iostream>

using namespace std;

int main()
{
	int i , j ,n;
	cout<<"Enter the number of row:";
	cin>>n;
	
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		
		}
		cout<<endl;
	}
	return 1;
}
