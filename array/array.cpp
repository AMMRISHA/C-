#include <iostream>
//#include <stack>
using namespace std;

int array[100],n=100;
class array_operation {
int x;	

public:
void insert(void);
void deletion(void);
void show(void);

	
};

void array_operation ::insert(void)
{
	int a,pos;
cout<<"Enter the no. of elements";
cin>>n;
for( int i=0;i<n;i++)
{
	cin>>array[i];
}
cout<<"Enter the elements that you want to insert:";
cin>>x;
cout<<"Enter the position";
cin>>pos;
for( int i=n;i>pos;i--)
{
	array[i]=array[i-1];
	
}
array[pos]=x;
cout<<"New array in:";
for(int i=0;i<n+1;i++)
{
	cout<<array[i]<<" ";
}
}
void array_operation:: deletion(void)
{
	cout<<"Enter the elements that you want to delete:";
cin>>x;
cout<<"Enter the position";
cin>>pos;
for( int i=0;i>pos;i--)
{
	array[i]=array[i-1];
	
}
array[pos]=x;
cout<<"New array in:";
for(int i=0;i<n+1;i++)
{
	cout<<array[i]<<" ";
}
}
void array_operation:: show(void)
{
    for(int i = 0;i<n;i++)
    {
    	cout<<array[i];
	}
}
int main() {
 int choice;
 array_operation sp;
cout<<"\nPerform operations on the stack:";
       
    while (1)
    {
         cout<<"\n1.insert the element\n2.delete the element\n3.Show\n4.End";
        cout<<"\n\nEnter the choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
    
            sp.insert();
            break;
        case 2:
           sp.deletion();
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
