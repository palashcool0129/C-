#include<iostream.h>
#include<conio.h>
#include<ctype.h>
main()
{
clrscr();
char ch;
int a;
cout<<"\n enter a character\n";
cin>>a;
a=ch;
if(isalnum(a))
{
cout<<"\n Alphanum ch \n";
if(isdigit(a))
cout<<"\n and digit ch \n";
else if(isalpha(a))
cout<<"\n And alphabetic ch \n";
}
else
cout<<"other character\n";
getch ();
return 0;
}
