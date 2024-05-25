#include<iostream>

using namespace std;

int main()
{
	int size=50;
	char city[20];
	
	cout<<"Enter city name:";
	cin>>city;
	
	cout<<"City is:"<<city;
	
	cout<<"Enter your city name again:";
	cin.getline(city,size);
	cout<<"City is:"<<city;
	cout<<"Enter another city name again:";
	cin.getline(city,size);
	cout<<"City is:"<<city;
	return 0;
	
}
