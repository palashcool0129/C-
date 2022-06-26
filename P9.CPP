#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char ch;
	cout<<"\n"<<"enter a character";
	cin>>ch;
	if(ch>=48 && ch<=57)
		cout<<"\n"<<"you entered a digit";
		else if (ch>=65 && ch<=90)
		cout<<"\n"<<"you entered an uppercase character";
		else if (ch>=97 && ch<=122)
		cout<<"\n"<<"you entered an lowercase caracter";
		else
		cout<<"\n"<<"you entered a special charcter";
getch();
return 0;
}
