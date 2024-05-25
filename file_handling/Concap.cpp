#include<iostream>
#include<fstream>
using namespace std;
class Councap
 {
   string con, cap;
   public :
     void createfile(string fn1, string fn2);
     void displayfile(string fn1, string fn2);
 };
 
 void Councap :: createfile(string fn1, string fn2)
      {   
        int i,n;  
        ofstream fout1, fout2;
        fout1.open("fn1",ios::app);
        fout2.open("fn2",ios::app);
        cout<<"Enter the number of country and capital";
        cin>> n;
        cin.get();//Enumulating back new line
        for(i=0;i<n;i++)
        {
        cout<<"Enter the country name  ";
        getline(cin,con);
        cout<<"Enter the capital name  ";
        getline(cin,cap);
        fout1<<con<<endl;
        fout2<<cap<<endl;
        }
        fout1.close();
        fout2.close();
      }
       
 void Councap :: displayfile(string fn1, string fn2)
      {
        int i;
        ifstream fin1,fin2;
        fin1.open("fn1");
        fin2.open("fn2");
        if(fin1.fail()!=0 && fin2.fail()!=0)
         {
           cout<<"File opening error \n";
         }
        else
         {     
               getline(fin1,con);
               getline(fin2,cap);
        	while(fin1.eof()==0 && fin2.eof()==0)
        	 {
           		cout<<"The capital of "<<con<<" Is " <<cap<<endl;
           		getline(fin1,con);
                getline(fin2,cap);-
         	 }
         }     
           fin1.close(); 
           fin2.close();  
      }
 
 int main()
  {
     Councap C;
     C.createfile("country","capital");
     C.displayfile("country","capital");
     return 0;
  }
 

