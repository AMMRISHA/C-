#include<iostream>
using namespace std;


class item{
	
int number;
int cost;

public:
void getdata(int a, float b);
void putdata(void);	
};

void item:: getdata(int a ,float b){
	number = a;
	cost = b;
}

void item ::putdata(void)
{
	cout<<number<<endl;
	cout<<cost;
}
int main()
{

	item p;
   //cout<<"Enter the number";
  // cin>>a;
   //cout<<"Enter the cost value";
   //cin>>b;
    p.getdata(200 ,30.45);
	p.putdata();
	
	item q;
	p.getdata(220 ,40.45);
	p.putdata();
	return 0;
}
