#include<iostream>
using namespace std;

class Office{
	protected:
		string name , city, position;
		
	public:
		void getdata(void){
				
	     cout<<"Enter your Name:";
	     cin>>name;
	    
	     cout<<"Enter your office city:";
	      cin.get();
	     cin>>city;
	     
	 	}
	 	
	    void putdata(void){
	    	cout<<"name"<<"  "<< "city"<<endl;
	    	cout<<name<<"  "<< city<<endl;
		}
	 
};
class Employee :  virtual public Office{
	protected:
		float Basic , HRA, salary;
		
	public:
		
		void getdata(void){
			Office:: getdata();
			cout<<"Enter your position:";
	      
	         cin>>position;
			cout<<"Enter your basic salary:";
			cin>>Basic;
			HRA = (Basic * 10)/100;
			salary = Basic + HRA;
		}
		 void putdata(void){
		 	Office::putdata();
	    	cout<<"name"<<"				"<<"position"<< "				"<< "city"<<"				"<<"salary"<<endl;
	    	cout<<name<<"			"<<position<<"				"<< city<<"				"<<salary<<endl;
		}
};

class Manager :  virtual public Office{
	protected:
		float Basic , HRA;
		double salary;
		float additional_allow;
	public:
	
		void getdata(void){
			Office:: getdata();
			cin.get();
			cout<<"Enter your basic salary:";
			cin>>Basic;
			HRA = (Basic * 10)/100;
			salary = Basic + HRA;
			additional_allow = (Basic * 30)/100;
			salary = Basic + HRA + additional_allow;
		}
		 void putdata(void){
		 	Office::putdata();
		 
			cout<<"name"<<"	"<<"position"<< "	"<< "city"<<"	"<<"salary"<<"	"<<"Additional Allowance"<<endl;
	    	cout<<name<<"	"<<position<<"	"<< city<<"		"<<salary<<"	1"<< additional_allow<<endl;
		}	
		
};



int main()
{
	Employee ep;
		Manager mg;
	int choice ;
	while(1)
	{
	
	cout<<"Enter your choice:";
	cin>>choice;
	switch(choice)
	{
	
	case 1: cout<< "you are an employee."<<endl;
			 
			 ep.getdata();
    		 ep.putdata();
			 break;
	case 2: cout<<"You are a manager."<<endl;
		   
    		 mg.getdata();
    		 mg.putdata();	
    		 break;
    case 3: exit(0);
    		break;
    default:"Invalid Choice\n";
    		break;
	}	 
    	
	}
	return 0;
}
