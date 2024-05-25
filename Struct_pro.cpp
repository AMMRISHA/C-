#include<iostream>
using namespace std;
int main()
	{
		struct{
			int myNum;// member
			string myName;//member
	
		}myStructure;
		
		myStructure.myNum = 1; // assign 1
		myStructure.myName = "Ammrisha";
		cout<< myStructure.myNum<<".  ";
		cout<<myStructure.myName;
		return 0;
		
		
	}
