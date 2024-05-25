#include <iostream>
//#include <stack>
using namespace std;

int stack[100],n=100,top=-1;
class stack_operation {
int top;	

public:
void push(void);
void pop(void);
void show(void);

	
};

void stack_operation ::push(void)
{
int x;

    if (top >=n - 1)
    {
        cout<<"\nOverflow!!";
    }
    else
    {
        cout<<"\nEnter the element to be added onto the stack: ";
        cin>>x;
        top = top + 1;
        stack[top] = x;
    }	
}
void stack_operation:: pop(void)
{
    if (top <= -1)
    {
        cout<<"\nUnderflow!!";
    }
    else
    {
        cout<<stack[top];
        top = top - 1;
    }
}
void stack_operation:: show(void)
{
    if (top <=0)
    {
        cout<<"\nUnderflow!!";
    }
    else
    {
        cout<<"\nElements present in the stack: \n";
        //stack_operation::push();
        for (int i = top; i > 0; i--)
           
		    {
			 cout<<stack[i];
            cout<<endl;
        	}
    }
}
int main() {
 int choice;
 stack_operation sp;
cout<<"\nPerform operations on the stack:";
       
    while (1)
    {
         cout<<"\n1.Push the element\n2.Pop the element\n3.Show\n4.End";
        cout<<"\n\nEnter the choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
    
            sp.push();
            break;
        case 2:
           sp.pop();
            break;
        case 3:
            sp.show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
 
  return 0;
}
