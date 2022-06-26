#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
class stu{ int rollno;
	   char name[25];
	   char clas[4];
	   float marks;
	   char grade;
    public:
	  void getdata()
       {  cout<<"rollno ";  cin>>rollno;
	  cout<<"name   ";    cin>>name;
	  cout<<"class  ";   cin>>clas;
	  cout<<"marks  ";   cin>>marks;
	  if (marks>=75)
	  grade='a';
	  else if(marks>=60)
	  grade='b';
	  else if(marks>=50)
	  grade='c';
	  else if(marks>=40)
	  grade='d';
	  else grade='f';
       }
       void putdata()
      { cout<<name<<",rollno "<<rollno<<"has "<<marks<<"% marks and"<<grade<<"grade ."<<endl;
      }
      int getrno()
      { return rollno;
      }
    }s1;
int main()
{   clrscr();
    ofstream fout("stu.dat",ios::in|ios::out|ios::app|ios::binary);
    char ans='y';
    while(ans=='y')
  { s1.getdata();
    fout.write((char*)&s1,sizeof(s1));
    cout<<"record added to file \n";
    cout<<"want to enter more records?(y/n)..";
    cin>>ans;
  }
fout.close();
getch();
return 0;
}
