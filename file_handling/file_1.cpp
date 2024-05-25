//Q-50: CONVERT INTO TWO CONSECUTIVE BLANKS IN OUTPUT FILE

#include<iostream>
#include<fstream>
using namespace std;

class Blanks
{
 char ch;
 public:
 void writefile(string fn);
 void updatefile(string fn1, string fn2);
 void displayfile(string fn);
};

void Blanks::writefile(string fn)
{
 ofstream fout(fn);
 cout<<"Enter the text: ";
 while((ch=cin.get())!='\n')
   fout<<ch;
 fout.close();
}

void Blanks::updatefile(string fn1,string fn2)
{
 ifstream fin(fn1);
 ofstream fout(fn2);
 if(fin.fail()!=0)
 {
  cout<<"\nFile open error\n";
 }
 elsen
 {
  int flag=0,flag1=0;
  fin.get(ch);
  do
  {
    if(ch!=' ')
    {
        if(flag1==0)
        {
            fout<<char(int(ch)-32);
            flag1=1;
        }
        else
        {
            fout<<ch;
        }
        flag=1;
    }
    else
    {
        if(ch==' ' && flag==1)
        {
            fout<<"  ";
            flag=0;
            flag1=0;
        }
   }
   fin.get(ch);
  }while(fin);
 }//else
 fin.close();
 fout.close();
}

void Blanks::displayfile(string fn)
{
  ifstream fin(fn);
  if(fin.fail()!=0)
  {
    cout<<"\nFile open error\n";
  }
  else
  {
    fin.get(ch);
    while(fin)
    {
      cout<<ch;
      fin.get(ch);
    }
    fin.close();
    cout<<endl;
  }
}

int main()
{
    Blanks B;
    B.writefile("text");
    cout<<"\n\nContent of the input file:\n"<<endl;
    B.displayfile("text");
    B.updatefile("text","text1");
    cout<<"\n\nContent of the output file:\n"<<endl;
    B.displayfile("text1");
 
 return 0;
}
