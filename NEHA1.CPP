#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
int main ()
{ clrscr ();
char str [80];
int i ;
cout<<"\n Enter any string(max. 80):";
gets(str);
str[0]=toupper(str[0]);
for(i=0;str[i]!='\0';i++)
    if(str[i]==' ')`                     `
    str[i+1]=toupper(str[i+1]);
cout<<"\n updated strings is :"<<str;
getch ();
return 0;
}