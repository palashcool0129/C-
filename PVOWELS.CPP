#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
main()
{
clrscr();
char str[80];
int vow_ctr=0;
	cout<<"enter the line"<<endl;
	gets(str);
	for(int i=0;str[i]!='\0';++i)
	{
	switch(str[i])
	{ case'a':
	  case'e':
	  case'i':
	  case'o':
	  case'u':
	  case'A':
	  case'E':
	  case'I':
	  case'O':
	  case'U':++vow_ctr;
	}
	}
cout<<"the total number of vowels in string \n"<<vow_ctr<<endl;
getch();
return 0;
}