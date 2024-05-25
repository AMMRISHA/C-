#include<iostream>


using namespace std;

int stack[100], n = 100 , top =-1;

class stack_operation{
	
	private:
		int top;
		
	public:
		void push(void);
		void pop(void);
		void display(void);
		
};

void stack_operation::push(void)
{
	int x;
	
	if(top>=n-1)
	{
		cout<<"\nstack overflow Insertion not possible ";
		
	}
	else
	{
		cout<<"Enter your element:";
		cin>>x;
		top= top+1;
		stack[top]=x;
		
	}
}

void stack_operation::pop(void){
	int x;
	if(top<=0)
	{
		cout<<"\n stack is  underflow . No deletion possible.";
		
	}
	else
	{
		x=stack[top];
		top = top -1;
	}
}

void stack_operation::display(void){
	if(top<=0)
	{
		cout<<"No element found";
		
	}
	else
	{
		for(int i = top; i>0 ; i-- )	
		{
			cout<<stack[i]<<"";
		}
	}

}
int main()
{
	int choice , n;
	stack_operation sp;
	
	while(1)
	{
		cout<<"Enter '1' for insert an element\n";
		cout<<"Enter '2' for delete an element\n";
		cout<<"Enter '3' for display the stack element\n";
		cout<<"Enter your choice:";
		cin>>choice;
			switch(choice)
			{
				case 1: sp.push();
						break;
				case 2:sp.pop();
						break;
				case 3:sp.display();
						break;
				case 0:exit(0);
				default: cout<<"\n invalid choice!!!";
				
			}
			
	}
	return 0;	
}
