#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{       clrscr();
	fstream filout1,filout2;
	filout1.open("mar.dat",ios::out);
	filout2.open("resu.dat",ios::out);
       //	char ans='y';
	int rollno;
	float marks;
	//while((ans=='y')||(ans=='Y'))
	cout<<"\n enter roll no:";
	 cin>>rollno;
	 cout<<"\n enter marks:";
	 cin>>marks;
	 filout1<<rollno<<"\n"<<marks<<"\n";
     //	 cout<<"\n want to enter more records(y/n)...";
     //	 cin>>ans;

       //	char an='x';
       //	int rno;
       //	float mark;
       //	while((ans=='y')||(ans=='Y'))
	cout<<"enter rno\n";
	 cin>>rollno;
	 filout2>>rollno;
	 cout<<"\n";
	 cout<<"enter mark\n";
	 cin>>marks;
	 filout2>>marks;
	 cout<<"\n";
	// cout<<"\n want to enter more records(y/n)...";
	// cin>>ans;

       filout1.close();
       filout2.close();
getch();
return 0;
}
