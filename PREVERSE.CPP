#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
main()
{
clrscr();
int i,l,k=0;
char str[80],word[80];
	cout<<"\n enter any string \n";
	gets(str);
	strcat(str,"");
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]!=' ')
	{ word[k]=str[i];
	  k=k+1;
	  cout<<"\n str1= "<<str[--k];
	}
	else
	{
	while(k>0)
	{ cout<<str[--k];
	  cout<<str[i]; }
	}
	}
getch();
return 0;
}

