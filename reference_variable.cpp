#include<iostream>

using namespace std;


int max( int &x ,int  & y)
{
	if(x>y)
	return x;
	else
	return y;
}
int main()
{
	int x = 4 , y=6;
	

	cout<<"The greater value is"<<	max(x,y);
}
