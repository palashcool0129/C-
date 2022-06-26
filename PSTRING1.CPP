#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
char str[80];
int i,count=0;
cout<<"\n enter any string";
gets(str);
for(i=0;str[i]!='\0';i++)
if(str[i]=='i')
count++;
cout<<"\n number of spaces"<<count;
getch();
return 0;
}
