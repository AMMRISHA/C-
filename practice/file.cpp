#include<iostream>
#include<fstream>

using namespace std;

class File1
{
	char ch;
	
	public:
		
		void createfile( string fn);
		void display(string fn);
		void updatefile(string fn , string fn1);
};


void File1::createfile( string fn)
{
  ofstream fout;
  
  fout.open("fn");
  
  cout<<"Enter your text:";
  while((ch = cin.get())!= '\n')
  
  	fout<<ch;
  	fout.close();
  
}

void File1::display( string fn)
{
	ifstream fin;
	fin.open("fn");
	
	cout<<"Displaying:"<<endl;
	
	while(fin)
	{
		ch= fin.get();
		}	
}

void File1 ::updatefile(string fn1, string fn2)
{
	ifstream fin("fn1");
	ofstream fout("fn2");
	
	if(fin.fail()!=0)
	{
		
		int flag =0 ,flag1=0;
		fin.get(ch);
		do
		{
			if(ch !=' ')
			{
						if(flag1==0)
						{
							fout<<char(int(ch) -32);
							flag1=1;
						}
						else
						{
							fout<<ch;
						}
						flag =1;
			}
			else
			{
				if(ch == ' ' && flag==1)
				{
					fout<<" ";
					flag =0;
					
				}
				
			}
			fin.get(ch);
		}
		while(fin);
		
	
	}
	
	fin.close();
	fout.close();
	
}

int main()
{
	File1 f1;
	f1.createfile("abc.txt");
	cout<<"display the file "<<endl;
	
	f1.display("abc.txt");
	f1.updatefile("abc.txt","pqr.txt");
	cout<<"display file after updation:"<<endl;
	return 0;
}
