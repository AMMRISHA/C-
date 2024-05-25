#include<iostream> 
#include<fstream> 
using namespace std; 
class FIL1 
{ 
 	 char ch;  	
	 public:  
	  void createfile(string fn);   	
	 void displayfile(string fn);  	
	 void updatefile(string fn, string fn1); 
}; 
void FIL1::createfile(string fn) 
 	{ 
 	 	ofstream fout;  	 	
		fout.open("fn");  	 	
		cout<<"Enter text";  	 	
		while((ch=cin.get())!='\n') 
 	 	fout<<ch; 
 	 	fout.close(); 	 
 	}  
void FIL1::displayfile(string fn) 
 	{ 
 	      ifstream fin;  	 	
		  fin.open("fn");  	
		  cout<<"Displayig: "<<endl;  	
		  ch=fin.get();  	
		  while(fin)
		  { 
 	 	 	cout<<ch; 
 	 	 	ch=fin.get(); 
 		  } 
 	 	 
 	 	fin.close();  	 	
		  cout<<endl; 
 	} 
void FIL1::updatefile(string fn1,string fn2) 
{ 
 	 ifstream fin("fn1"); 
 	 ofstream fout("fn2"); 
	 if(fin.fail()!=0) 
		 { 
		  cout<<"\nFile open error\n"; 
		 } 
	 else 
	 { 
	  int flag=0,flag1=0;   fin.get(ch);   
	  do 
	  {    
	   if(ch!=' ') 
	    { 
	        if(flag1==0) 
	        { 
	            fout<<char(int(ch)-32);             
				flag1=1; 
	        } else 
	        
	        { 
	            fout<<ch; 
	        } 
	        flag=1; 
	    }     
		else 
		    { 
		        if(ch==' ' && flag==1) 
		        { 
		            fout<<"  ";             
					flag=0;             
					flag1=0; 
		        } 
		   } 
	   fin.get(ch);   
	   }
	   while(fin); 
	 } 
	 fin.close();  fout.close(); 
} 
int main(){ 
 
		FIL1 f1; 
		f1.createfile("Modular kitchen.txt");
		cout<<"Content of input file"<<endl;  	
		f1.displayfile("Modular kitchen.txt");  	
		f1.updatefile("Modular kitchen.txt","pqr.txt");  	
		cout<<"content of output file"<<endl;  	
		f1.displayfile("pqr.txt"); 
        return 0; 
} 

