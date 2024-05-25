#include<iostream>
using namespace std;
int main()
{
//	int x;
//	cout<<"Enter your age:";
//	cin>>x;
//	cout<<"Your age is"<<x;
//	return 0;
int day;
cout<<"Which day you want to know!!\n";
cin>>day;
switch(day)
{
	case 1:cout<<"Monday";
			break;
	case 2:cout<<"Tuesday";
			break;
	case 3:cout<<"Wednesday";
			break;
	case 4:cout<<"Thursday";
			break;
	case 5:cout<<"Friday";
			break;
	case 6:cout<<"Saturday";
			break;
	case 7:cout<<"Sunday";
			break;
	default: cout<<"Default choice!! please reenter carefully";
}
return 0;
}
