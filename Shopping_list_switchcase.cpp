#include<iosteram>
using namspace std;

const = 50;
class item{
	int itemcode[m];
	float itemprice[m];
	int count;
	
	public:
	
	void CNT(void){
		count = 0;// initialization of count
	}	
	void getitem();
	void dispaly_sum(void);
	void dispaly_item(void);
	void remove(void);
	
	
};

void item:: getitem(void)
{
	cout<<"Enter your item code"<<endl;
	cin>>itemcode[count];
	cout<<"Enter your item price:"<<endl;
	cin>>itemprice[count];
	count++;
}

void item::dispaly_sum(void){
	float sum =0;
	for(int i = 0;i<count;i++)
	{
		sum = sum + itemprice[i];
		cout<<"\n Total Value:"<<sum<<endl;
		
	}
}

void item::display_item(void) 
{
	cout<<"\n code		price"<<endl;
	for(int i = 0;i<count;i++)
	{
		cout<<itemcode[i]<<"		";
		cout<<itemprice[i];
		
	}
}

vi item::remove(void)
{
	int a ;
	cout<<"Enter item code:"<<endl;
	cin>>a;
}
int main()
{
	item order;
	order.CNT();
	int x;
	while(1)
	{
		cout<<"Enter your appropriate choice: "<<endl;
		cout<<"Enter '1' to add new item";
		cout<<"Enter '2' to Display total value";
		cout<<"Enter '3' Delete an item"<<endl;
		cout<<"Enter '4' Display all items"<<endl;
		cout<<"Enter '5' for Quit the operation"<<endl;
		cout<<"Enter your choice:";
		cin>>x;
		switch(x)
		{
			case 1:order.getitem();
				break;
			case 2: order.display_sum();
				break;
			case 3: order.display_item()
				break;
			case 4:order.remove();
				break;
			case 5:break;
			
			default:cout<<"Error is input . Please choose a valid input again.";
		}
	}

	return 0;
}
