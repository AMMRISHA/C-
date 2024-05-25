
// create an oject and access the attributes
#include<iostream>

using namespace std;
class ITEM{
	
	public:
		void putdata();
		void getdata();
		int myNum;
};

void ITEM :: putdata()
{
	cout<<myNum;
}
int main()
{
	ITEM  it;
	it.myNum=15;
	it.putdata();
	
}
