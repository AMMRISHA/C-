#include<iostream>

using namespace std;
class student{
protected:

string name;
int Roll;

public:

void getdata(void);
void putdata(void);
 
};
//student class's getdata() and putdata()
void student::getdata(void)
{

 cout<<"Enter your name: "<<endl;
 cin>>name;
 cout<<"Enter your roll: "<<endl;
 cin>>Roll;
}

void student::putdata(void)
{
cout<<name <<" "<<Roll;

}


//inherite test class
class test : virtual public student
{
protected:

float marks1 , marks2;

public:


void getdata()
{
cout<<name<<" "<<"Enter your first Marks: "<<endl;
cin>>marks1;

cout<<"Enter your second Marks: "<<endl;
cin>>marks2;
}
// inherite the student class as sports

void putdata()
{
 cout<<"Your first marks: " <<marks1<<endl;
cout<<"Your Second marks: "<<marks2<<endl;
}
};
class sports:virtual public student
{
protected :
float score;
public:

void getdata()
{
cout<<"Your score:";
cin>>score;
}

void putdata()
{
cout<<"Score is:"<<score;
}
};
// inherite the student class as result

class result:public test, public sports
{
protected:
float Total;
public:

void getdata()
{

student::getdata();
test::getdata();
sports::getdata();
Total = marks1 +marks2+score;
}
void putdata(void)
{

student::putdata();
test::putdata();
sports::putdata();
cout<<"Your Total marks is:"<<Total<<endl;

}
};
int main()
{
result R;
R.getdata();
R.putdata();
return 0;
}
