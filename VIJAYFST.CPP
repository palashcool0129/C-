#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{       clrscr();
	fstream filout;
	filout.open("marks.dat",ios::in);
	fstream fin;
	fin.open("result.dat",ios::in);
	char ans='y';
	int rollno;
	float marks;
	while((ans=='y')||(ans=='Y'))
       { cout<<"\n enter roll no:";
	 cin>>rollno;
	 cout<<"\n enter marks:";
	 cin>>marks;
	 filout<<rollno<<"\n"<<marks<<"\n";
	 cout<<"\n want to enter more records(y/n)...";
	 cin>>ans;
       }
	char an='x';
	int rno;
	float mark;
	while((an=='x')||(an=='X'))
       { cout<<"enter rno\n";
	 cin>>rno;
	 fin>>rno;
	 cout<<"\n";
	 cout<<"enter marks\n";
	 cin>>marks;
	 fin>>marks;
	 cout<<"\n";
	 cout<<"\n want to enter more records(x/n)...";
	 cin>>an;
       }
       filout.close();
       fin.close();
getch();
return 0;
}
