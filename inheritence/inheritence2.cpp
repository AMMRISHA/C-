#include<iostream>

using namespace std;

class Publication{
	protected:
		string Title_video;
		string Title_book;
		int book_price, video_price;
	public:
	void getdata()
{
	cout<<"Enter the Title of the Book:"<<"\t";
	cin>>Title_book;
	cout<<"Enter the book price:"<<"\t";
	cin>>book_price;
	cout<<"Enter the Title of the Video:"<<"\t";
	cin>>Title_video;
	cout<<"Enter the video price:"<<"\t";
	cin>>video_price;
	
}
void putdata()
{
	cout<<"The "<<Title_book<<" "<<"price is:"<<book_price;
	cout<<"The "<<Title_video<<" "<<"price is:"<<video_price<<endl;
	
}
		
};


class video: public Publication{
	protected:
			int duration_video;
	public:
	
		void getdata(){
			Publication::getdata();
			
		cout<<"Enter the duration of the video:"<<"\t";
		cin>>duration_video;	
		}
		void putdata(){
			Publication::putdata();
			cout<<"And the duration is"<<" "<<duration_video<<"hours";
			
		}
};

class Book:  virtual public Publication
{
	protected:
		int page_no;
		
	public:
		
		void getdata(){
			
			cout<<endl<<"Enter the number of pages in the book:"<<"\t";
			cin>>page_no;
		}
		void putdata(){
			
			cout<<endl<<"page number is:"<<"\t"<<page_no;
		}
		
};
int main()
{
	video vo;
	Book bk;
	video vb;
	vb.getdata();
	vb.putdata();
	bk.getdata();
	bk.putdata();
	
	return 0;
}
