#include<iostream> 
 #include<string> 
using namespace std; 
 class String{ 
 string s; 
 public: 
 string getstring(); 
 string concate(string s1,string s2); 
 int comp(string s1,string s2); 
 void display(); 
}; 
 
string String::getstring(){ 
 cout<<"Enter a String: "; 
 getline(cin,s); 
 return s; 
} 
string String::concate(string s1,string s2){ 
 s=s1+s2; 
 return s; 
} 
int String::comp(string s1,string s2) 
{ 
cout<<"String comparison result"<<endl; 
int x= s1.compare(s2); 
if(x==0){ 
 cout<<"Strings are equal"<<endl; 
 } 
 else if(x>0){ 
 cout<<s1<<"greater than "<<s2<<endl; 
 } 
 else 
 { 
 cout<<s1<<"less than"<<s2<<endl; 
 } 
} 
void String::display(){ 
 cout<<"String concatenation result:"<<endl; 
 
 cout<<s; 
} 
int main(){ 
 String a,b,c; 
 string s1,s2,s3; 
 s1=a.getstring(); 
 s2=b.getstring(); 
 c.comp(s1,s2); 
 c.concate(s1,s2); 
 c.display(); 
 return 0; 
} 
