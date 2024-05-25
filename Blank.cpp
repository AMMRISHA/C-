#include<iostream>
using namespace std;

class Blank{
	
	char str[1000];
	
	public:
		void readdata()
		{
			int i=0;
			cout<<"Enter any string:";
			cin.getline(str,1000);
			
		}
		
		void count(){
			int i=0, countblank=0;
				while(str[i]!='\0')
				{
					if(str[i]== ' ')
					{
						countblank++;
						i++;
						continue;
					}
					if(countblank>=1)
					{
						cout<<" ";
						cout<<str[i];
						countblank=0;
					}
					else
					{
						cout<<str[i];
						
					}
					i++;
				}
		}
};

int main()
{
	Blank bk;
	bk.readdata();
	bk.count();
	return 0;
}
