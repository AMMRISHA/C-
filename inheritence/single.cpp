#include<iostream>

using namespace std;

class A{
	protected:
	string name;
	
	public:
		void getdata( void)
		{
			cout<<"Enter your name";
			cin>>name;
		}
		
		void putdata(void){
			cout<<"Your name is : "<<name;
		}
};

class B : public A
{
	protected:
		string choice;
		
	public:
		void getdata(void){
			A::getdata();
			cout<<"your are in B class or not "<<endl;
			cin>>choice;
			
		}
		void putdata (void)
		{
			A::putdata();
			cout<<"B class is inherits from A"<<endl;
			cout<<"Congratulations"<<name<<endl;
		}
};

int main()
{
	B b;
	b.getdata();
	b.putdata();
	return 0;
}
