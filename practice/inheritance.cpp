#include<iostream>

using namespace std;


class student{
	protected:
		
		int roll ;
		char name[20];
	
	public:
		void getdata();
		void putdata();
};
void student::getdata()
{
	cout<<"Enter your name:";
	cin.getline(name, 20);
	cout<<"Enter your roll number:";
	cin>>roll;
	
}

void student ::putdata()
{
	cout<<name << " "<<roll <<" ";
}

class test :virtual  public student{
	protected:
		float marks1 , marks2;
	
	public:
		void getdata();
		void putdata();
};

void test ::getdata()
{	student::getdata();
	cout<<"Enter your First marks:";
	cin>>marks1;
	cout<<"Enter your second marks:";
	cin>>marks2;
}
void test ::putdata(){
	student::putdata();
	cout<<"Your first marks is"<<marks1<<" "<<"Your second marks is"<<marks2;
}
class sports :virtual  public student
{
	protected:
		float score;
	
	public:
		void getdata();
		void putdata();
};

void sports ::getdata()
{	
	cout<<"Enter your score:";
	cin>>score;
}
void sports ::putdata(){
	cout<<"Your score is"<<score;
}
class result: public test , public sports
{
	protected:
		float total;
		
	public:
		void getdata();
		void putdata();
};


void result ::getdata()
{
	test::getdata();
	sports::getdata();
}
void result ::putdata(){
	
	test::putdata();
	sports::putdata();
	total = marks1 + marks2 + score;
	cout<<"Your total marks is"<<" "<<total;
}
int main()

{
	result r;
	r.getdata();
	r.putdata();
	return 0;
}
