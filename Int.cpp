#include<iostream>

using namespace std;

class Integer{
	
	int m , n;
	
	public:
		Integer (void)
		{
			m=0;
			n=0;
		}
		Integer (int x, int y)
		{
			m=x ;
			n=y;
		}
		Integer(Integer &i)
		{
			m = i.m;
			n = i.n;
		}
		void show(void);
		void sum(int x , int y);
		
};

void Integer::show(void){
	cout<<"The value of m is :"<<m<<endl;
	cout<<"The value of n is :"<<n<<endl;
}
void Integer::sum(int x , int y){
	int sum;
	sum = x +y;
	cout<<"Sum"<<sum<<endl;
}
int main()
{
	Integer ig;
	Integer ig1;
	Integer A;
	Integer B(12,13);
	A.show();// calling the show function for A
	B.show();// calling the show function for B
	ig.sum(int x , int y);
	return 0;
}
