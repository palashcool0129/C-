#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char ch;
	cout<<"enter a character between a and v :	\n";
	cin>>ch;
	int num=ch;
	cout<<"\n Next four characters are:";
	cout<<(char)(ch+1)<<"\n";
	cout<<(char)(ch+2)<<"\n";
	cout<<(char)(ch+3)<<"\n";
	cout<<(char)(ch+4)<<"\n";
	cout<<"num";
	cout<<num;
return 0;
}

