#include<iostream>

using namespace std;

int stack[100], n=100 , top = -1;
class stack_operation{
	
	int top;
	public:
		void push(void);
		void pop(void);
		void display(void);
		
};

void stack_operation :: push(void)
{
	int x;
	if(top>=n-1)
	{
		cout<<"\noverflow"<<endl;
		
	}
	else
	{
		cout<<"\nEnter the element that you want to add:"<<endl;
		cin>>x;
		
		top=top+1;
		stack[top]= x;	
	}
}

void stack_operation:: pop(void)
{
	int x;
	if(top<=-1)
	{
		cout<<"\nunderflow!!!"<<endl;
		
	}
	else
	{
		x = stack[top];
		top = top-1;
	}
}

void stack_operation :: display(void)
{
	if(top<=0)
	{
		cout<<"\nno elements found."<<endl;
		
	}
	else
	{
		cout<<"Stack elements are:"<<endl;
		
		for(int i=top;i>0;i--)
		{
			cout<<stack[i]<<endl;;
		}
	}
}

int main()
{
int n,choice ;
stack_operation sp;

	while(1)
	{
		cout<<"Enter 1 for insert an element into stack"<<endl;
		cout<<"Enter 2 for delete an element from stack"<<endl;
		cout<<"Enter 3 to display the stack"<<endl;
		cout<<"Enter 4 for exit the operation."<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1: sp.push();
					break;
			case 2: sp.pop();
					break;
			case 3: sp.display();
					break;
					
			case 4: exit(0);
			
			default: cout<<"\Invalid choice:";
			
		}
	}
	return 0;
	
}
