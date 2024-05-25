#include<iostream>

using namespace std;

class Array{
	int size, arr[10];
	public:
		void initialize()
		{
			cout<<"Enter the number of elements:";
			cin>>size;
			cout<<"enter the elements:";
			
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		
		void display()
		{
			cout<<"The elements are:";
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<" ";
			}
		}

	void search()
	{
		int x;
		cout<<"Enter the searching element:";
		cin>>x;
		
		for(int b=0;b<size;b++)
		{
			if(arr[b] == x)
			{
				cout<<"element is found at "<<arr[b]<<" "<<"position";
				break;
			}
		if(b==size)
		{
			cout<<"Element not found";
		}
		}
		
	}
	
	void sort()
	
	{
		int swap;
		
		for(int i =0;i<size;i++)
		{
			for( int j=1;j<size;j++)
			{
				if(arr[i]>arr[j])
				
				{
				
					
					swap = arr[i];
					arr[i]=arr[j];
					arr[j]=swap;
				}
			}
		}
			cout<<"sorting is completed:\n";
		
	}
	void reverse()
	{
		
	}
	
};

int main()
{
	int choice;
	Array a;
	a.initialize();
	while(1){
	cout<<" Enter 0 to exit the operation \nEnter 1 for display array \n Enter 2 for sesrchin an element\n Enter 3 for sort the array elements \n enter 4 for reverse the array\n";
	
	cout<<"Enter your choice\n";
	cin>>choice;
	switch(choice)
	{
		case 1:a.display();
				break;
		case 2: a.search();
				break;
				
		case 3: a.sort();
				break;
				
		case 4: a.reverse();
				break;
		case 0: exit(0);
		
		default: cout<<"invalid choice!!!!";
	}
	
}
return 0;
}
