#include<iostream>

using namespace std;

class space{
	
	int x,y,z;
	public :
		
		void getdata(void);
		void putdata(void);
		void operator-();
};

void space ::getdata()
{
 cout<<"enter the value of x,y,z";
 cin>>x>>y>>z;
 
}
void space ::putdata()
{
	cout<<"the value of x is:"<<x;
	cout<<"the value of y is:"<<y;
	cout<<"the value of z is:"<<z;
	
}

void space::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
	space s;
	s.getdata();
	cout<<"s:";
	s.putdata();
	-s;
	cout<<"s-";
	s.putdata();
	
}
