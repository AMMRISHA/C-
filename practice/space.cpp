#include<iostream>

using namespace std;



class blank
{
	
	char str[1000];
	
	public:
		void readdata();
		void count();
};


void blank::readdata()
{
	cout<<"enter your string";
	cin.getline(str,1000);
}


void blank::count()
{
	int i,blankcount = 0;
	
	
	while(str[i] !='\0')
	{
		if(str[i] ==' ')
		{
			blankcount++;
			i++;
			continue;
		}
		if(blankcount>=1)
		{
			cout<<" ";
			cout<<str[i];
			blankcount=0;
		}
		else
		{
			cout<<str[i];
		}
		i++;
	}
}

int main()
{
	blank bk;
	bk.readdata();
	bk.count();
	return 0;
}
