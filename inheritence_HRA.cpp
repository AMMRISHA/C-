#include<iostream> 
using namespace std; 
class Office 
{ 
 	protected: 
 	int basic,hra,a=0; 
 	public: 
 void getdata();  
 void putdata(); 
}; 
void Office::getdata() 
{ 
 	bool k; 
 	cout<<"\nEnter the basic salary of employee:\n "; 
 	cin>>basic; 
 	cout<<"\nEnter the HRA of employee:\n"; 
 	cin>>hra; 
 	cout<<"if the employee is manager then enter'1' :\n"; 
 	cin>>k;  	
	 if(k==true) 
 	{ 
 	cout<<"\nEnter additional allowance:\n"; 
 	cin>>a; 
 	} 
}
void Office::putdata() 
{ 
 	cout<<"\nThe basic salary of the employee is:\n "; 
 	cout<<basic; 
 	cout<<"\nThe HRA of the employee is:\n "; 
 	cout<<hra; 
 	cout<<"\nThe additional allowance of the employee is:\n "; 
 	cout<<a; 
} 
class kolkata:public Office 
{ 
 	public:  	
	 float k;  
	 void getdatak() 
 	{ 
 	cout<<"\nEnter the city allowance:\n"; 
 	cin>>k; 
 	} 
 	void putdatak() 
 	{ 
 	cout<<"\nThe city allowance is:\n"<<k;  	cout<<"\nTotal Salary of the employee:\n"<<basic+hra+a+k<<endl; 
 	} 
}; 
class delhi:public Office 
{ 
 	public:  	
	 float d; 
	void getdata_d() 
 	{ 
 	cout<<"\nEnter the city allowance:\n"; 
 	cin>>d; 
 	} 
 	void putdata_d() 
 	{ 
 	cout<<"\nThe city allowance is:\n"<<d;  	
	 cout<<"\nTotal Salary of the employee:\n"<<basic+hra+a+d<<endl; 
 	} 
}; 
class dargeeling:public Office 
{ 
 	public:  	
	 float l;  	
	 void getdata_l() 
 	{ 
 	cout<<"\nEnter the city allowance:\n"; 
 	cin>>l; 
 	} 
 	void putdata_l() 
 	{ 
 	cout<<"\nThe city allowance is:\n"<<l;  	
	 	cout<<"\nTotal Salary of the employee:\n"<<basic+hra+a+l<<endl; 
 	} 
}; 
int main() 
{ 
 	kolkata a; 
	delhi m; 
 	dargeeling n; 
 	cout<<"Enter the employee information who work in Kolkata:\n"; 
 	a.getdata(); 
 	a.getdatak(); 
 	cout<<"Enter the employee information who work in Delhi:\n"; 
 	m.getdata(); 
 	m.getdata_d(); 
 	cout<<"Enter the employee information who work in Darjeeling:\n"; 
 	n.getdata(); 
 	n.getdata_l();  	
	 cout<<" Employee information who work in Kolkata:\n"; 
 	a.putdata(); 
 	a.putdatak(); 
 	cout<<"Employee information who work in Delhi:\n"; 
 	m.putdata(); 
 	m.putdata_d(); 
 	cout<<"Employee information who work in Darjeeling:\n"; 
 	n.putdata(); 
 	n.putdata_l();  	
	 return 0; 
} 

