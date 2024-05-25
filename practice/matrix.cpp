#include<iostream>

using namespace std;


class matrix_member{
	int i, j, k , M1[3][3], M2[3][3],r,result[3][3];
	
	public:
		void create(void);
		void add(void);
		void mul (void);
		void sub(void);
		
};
	
	void matrix_member :: create(void)
	{
		cout<<"Entre your first matrix elements:"<<endl;	
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
			cout<<"Enter the  number of"<<i+1<<" row  and" <<j+1 <<" column :";
			cin>> M1[i][j];
			 	
			}
		}
	
	
		cout<<"Enter your second matrix elements:"<<endl;
		
		for(int i=0;i<3;i++)
		{
			for(int j =0;j<3;j++)
			{
				cout<<" Enter the number of"<<i+1<<"row and"<<j+1<<"column:";
				cin>>M2[i][j];
				
			}
		}
		
		cout<<"The values of the first matrix is:";
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<"Enter the number of"<<i+1<<" and "<<j+1 <<"is"<<" "<<M1[i][j]<<"\t"<<endl;	
						
			}
		}
			cout<<"The values of the second matrix is:";
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<"The value of"<<i+1<<" and "<<j+1 <<"is"<<" "<<M2[i][j]<<"\t"<<endl;	
						
			}
		}
	}
		
	//// addition of matrix	
		
	void matrix_member ::add(void)
	
	
	{
		for(int i=0;i<=3;i++)
		{
			for(int j=0;j<3;j++)
			{
				result[i][j]= M1[i][j] + M2[i][j];
				
			}
		}
		
		cout<<endl;
	cout<<endl<<"The Addtion of these two Matrix are as follows…"<<endl;
		for(int i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"\t"<<result[i][j]<<"\t";
			}
			cout<<endl;
		}
	
	}


/// deletion of the matrix

	
	void matrix_member::sub(void)
	{ 	
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				result[i][j] = M1[i][j] - M2[i][j];
			}
		}
		cout<<endl;
		cout<<"Your matrix elements after subtraction:"<<endl;
		for(int i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"\t"<<result[i][j]<<"\t";
			}
		}	
	}



///multiplication of matrix

void matrix_member :: mul(void)
	
{
	for( i=0;i<3;i++)
	{ 
	for(j=0;j<3;j++)
	{ 
	result[i][j]=0;
	} 
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				r = M1[i][k] * M2[k][j];
				result[i][j]= result[i][j] + r;
			}
			r=0;
		}
	}

	/// print the resuult matrix
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t" <<result[i][j]<<"\t";
		}
		cout<<endl;
	}
}


int main()
{
		int choice , n;
		matrix_member mrt;
	
	while(1)
	{
		cout<<"Enter '1' for create two matrix \n";
			cout<<"Enter '2' for add two matrix \n";
		cout<<"Enter '3' for sub two matrix\n";
		cout<<"Enter '4' for mul two matrix \n";
		cout<<"Enter your choice:";
		cin>>choice;
			switch(choice)
			{
				case 1: mrt.create();
						break;
				case 2: 
						cout<<"hello";
						mrt.add();
						break;
				case 3:mrt.sub();
						break;
				case 4:mrt.mul();
						break;
				case 0:exit(0);
				default: cout<<"\n invalid choice!!!";
				
			}
			
	}
	return 0;		
}
