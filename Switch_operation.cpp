#include<iostream>
using namespace std;


// IO operation function
void  IO_operation(){
	string name;
	cout<<"Enter your name:"<<endl;
	cin>> name;
	cout<<"Welcome "   <<name <<endl;;

}

// Circle operation
 double Circle_operation(){
 	int ch;
 	float r;
 	cout<<"Enter 1 to find the area of a circle."<<endl;
 	cout<<"Enter 2 to find the Diameter of a circle."<<endl;
 	cout<<"Enter 3 to find the Circumference of a circle."<<endl;
 	cout<<"Enter 0 to exit from the operations."<<endl;
	while(1)
	{
		cout<<"What Circle operations do you want to perform:"<<endl;
		cin>> ch;
		cout<<"Enter your circle radious "<<endl;
		cin>>r;
		switch(ch)
		{
			case 1:cout<<"The area of the given circle is "<<3.14*r*r<<endl;
					break;
			case 2: cout<<"The Diameter of a circle is "<<2*r;
				    break;
			case 3: cout<< "The Circumference of the circle is "<<2*3.14*r;
					break;
			case 0: exit(0);
					break;
			default:cout<<"Invalid choice!!";
				
		}
		
	}
}

//Rectangle operation


int main()

{
	int choice;
	
	cout<<"Enter 0 to exit from the operations."<<endl;
	while(1)
	{
		
		cout<< "Enter your choice"<<endl;
		cin>>choice;
		
		switch(choice){
			
			case 1 : IO_operation();
					break;
			case 2: Circle_operation();
					break;
//			case 3: Rectangle_operation();
//					break;
//			case 4: Square_operation();
//					break;
//			case 5: Area_operation();
//					break;
//			case 6: Matrix_operation();
//					break;
//			case 7: Fibonacci_series();
//					break;
//			case 8: Arithmetic_operation();
//					break;
//			case 9:Logical_operation();
//					break;
//			case 10: Boolean_operation();
//					break;
//			case 11: Struct_operation();
//					break;
//			case 12: Pattern_operation();
//					break;
//			case 13: Sum_natural_num();
//					break;
//			case 14:Array_operation();
//					break;
//			case 15: Linked_list_operation();
//					break;
//			case 16: Queue_operation();
//					break;
//			case 17: String_operation();
//					break;
//			case 18: Conversion_operation();  // like Binary to octal 
//					break;
//			case 19: File_handling_operation();
//					break;
			case 0: exit(0);
			default: cout<<"Invalid choice!!";
					
					 
		}
	}
	return 0;
}
