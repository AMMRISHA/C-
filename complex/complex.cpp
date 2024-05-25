#include<iostream>

using namespace std;

class complex{
	private:
		float real;
		float imag;
	public:
		
		void input()
		{
//			cout<<"Enter you real and imaginary portions respectively:";
			cin>>real;
			cin>>imag;
			
		}
		
		void output()
		{
			
			if(imag<0)
			cout<< "Output of the complex number is :"<<real<<imag<<"i";
		}
};

int main()
{
	complex c1, c2,result;
	cout<< "Enter your first complex number:";
	c1.input();
	cout<<"Enter your second complex number:";
	c2.input();
	
	
	return 0;
}
