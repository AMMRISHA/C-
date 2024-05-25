#include<iostream>

using namespace std;

class Vehicle{
	
	public:
		void myHok(){
			cout<<"Hunhhhh";
		}
		
	
};

class car: public Vehicle{
	public:
	string model1="XYZ";
};

int main()
{   car cr;
	Vehicle ve;
	ve.myHok();
	cout<<"\t"<<cr.model1;
	return 0;
}
