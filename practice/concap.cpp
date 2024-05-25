#include<iostream>

#include<fstream>

using namespace std;


class concap{
	
		string con , cap;
	public:
		void createfile(string fn1, string fn2);
		void display(string fn1,string fn2);
};


void concap::createfile(string fn1 , string fn2)
{  
	ofstream fout1 , fout2;
	fout1.open("fn1");
	fout2.open("fn2");
	int choice;
	cout<<"Enter the no. of country :";
	cin>>choice;
	
	for(int i=0;i<choice;i++)
	{
		cout<<"Enter country name:";
		getline(cin,con);
		fout1<<con<<endl;
		cout<"Enter the capital name:";
		getline(cin,cap);
		fout2<<cap;
		
	}
	fout1.close();
	fout2.close();
	
	
}

void concap:: display(string fn1, string fn2){
	
	ifstream fin1,fin2;
	fin1.open("fn1");
	fin2.open("fn2");
	
	if(fin1.fail()!=0 && fin2.fail()!=0)
	{
		cout<<"openning error"<<endl;
		
	}
	else
	{
	    cout<<"displaying";
	    
		getline(fin1,con);
		getline(fin2,cap);
		while(fin1.eof() == 0 && fin2.eof()==0)
		{
			cout<<"The capital of"<<cap <<"is "<<con<<endl;
			getline(fin1,con);
		getline(fin2,cap);
			
		}
	    
	}
	fin1.close();
	fin2.close();
	cout<<endl;
}


int main()
{
	concap cp;
	cp.createfile("country.txt","capital.txt");
	cp.display("country.txt","capital.txt");
	return 0;
}
