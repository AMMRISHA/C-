#include<iostream>

using namespace std;

class complex
{
	float x , y;
	
	public:
		complex(){ }
		complex(float real , float imag)
		{
			x= real ;
			y=imag;
			
		}
		complex operator+(complex c);
		void display(void);
};

complex complex::operator+(complex c)
{
	complex temp;
	
	temp.x = x + c.x;
	temp.y = y +c.y;
	return(temp);
}


void complex:: display()
{
	cout<<x <<" + "<<"i"<<y;
 } 
 
 
 int main()
 {
 	complex c1 , c2, c3;
 	
 	c1= complex(10.5 , 10.5);
 	c2 = complex(20.2, 20.4);
 	c3 = c1 + c2;
 	cout<<"c1:";c1.display();
    cout<<"\nc2:";c2.display();
 	cout<<"\nc3:";c3.display();
 	return 0;
 }
 
