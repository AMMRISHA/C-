#include<iostream>
using namespace std;

struct car{
	
	string carName;
	string carModel;
	int year;
} ;

int main(){
	
	car mycar1; // create a car structure to store the mycar1 data
 	// asssign the data
	 mycar1.carName = "BMW";
	 mycar1.carModel = "12345";
	 mycar1.year = 2013;
	// create a car structure to store the mycar1 data 
	car mycar2; 
 	// asssign the data
	 mycar2.carName = "BMW";
	 mycar2.carModel = "12345";
	 mycar2.year = 2013;
	 cout<< mycar1.carName <<  mycar1.carModel<<mycar1.year<<"\n"; 
	  cout<< mycar2.carName <<  mycar2.carModel<<mycar2.year; 
	 return 0;	
}
