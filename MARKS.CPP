#include<iostream.h>
#include<fstream.h>
int main()
{
ofstream filout;
filout.open("marks.dat",ios::out);
char ans='y';
int rollno; float marks;
while(ans=='y'||ans=='Y')
{   cout<<"Enter roll no";
cin>>rollno;
cout<<"enter marks:";
cin>>marks;
filout<<rollno<<'\n'<<marks<<'\n';
cout<<"\n Wznt to enter more records?(y/n),,,";
cin>>ans;
}
filout.close();
return 0;
}