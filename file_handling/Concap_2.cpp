#include<iostream> 
#include<fstream> 
using namespace std; 
class cl1 
{ 
 	string ch1,ch2;  	
	 public: 
 	 void createfile(string fn1,string fn2);  	
	 void displayfile(string fn1,string fn2); 
}; 
void cl1::createfile(string fn1,string fn2) 
 	{ 
 	 	ofstream fout1;  	 	
		  ofstream fout2;  	 	
		  fout1.open(fn1);  	 	
		  fout2.open(fn2);  	 	
		  int i,c1; 
 	 	cout<<"Enter number of country:"; 
 	 	cin>>c1;  	 	
		  cin.get(); 
 	 	for(i=0;i<c1;i++) 
 	 	{ 
 	 	 	cout<<"Enter the country name"; 
 	 		getline(cin,ch1);  	 	
			  fout1<<ch1<<endl; 
	 	 	cout<<"Enter the capital name"; 
 	 	 	getline(cin,ch2);  	 	 	
			   fout2<<ch2<<endl; 
 	 	 	 
 	 	} 
 	 	fout1.close();  	 	
		  fout2.close(); 	 
 	} 
void cl1::displayfile(string fn1,string fn2) 
 	{ 
 	 	ifstream Fin1,Fin2; 
 	 	 
 	 	Fin1.open(fn1); 
 	 	Fin2.open(fn2); 
 	 	if(Fin1.fail()!=0 && Fin2.fail()!=0) 
 	 	{ 
 	 	 	cout<<"File opening error\n"; 	 	 
 	 	} 
 	 	else { 
 	 	cout<<"Displayig: "<<endl;  	 	
		  getline(Fin1,ch1);  	 	
		  getline(Fin2,ch2);  	 	
		  while(Fin1.eof()==0 && Fin2.eof()==0){  	 	 	
		  cout<<"The capital of "<<ch1<<" is "<<ch2<<endl; 
 	 	 	  getline(Fin1,ch1);  	 	 	
			   getline(Fin2,ch2); 
 	 	 	 	 	 
 	 	} 
 	 	} 
 	 	Fin1.close();  	 	Fin2.close();  	 	cout<<endl; 
 	} 
 
int main(){ 
 
 	cl1 f1; 
 	f1.createfile("country.txt","capital.txt");  	
	f1.displayfile("country.txt","capital.txt"); 
    return 0; 
} 

