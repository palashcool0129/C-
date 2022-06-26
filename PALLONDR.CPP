#include<iostream.h>
#include<conio.h>
int main ()
{ clrscr ();
cout<<"\n*************************************************************************************";
char string[80],c;
int i ,j ,flag=1,len=0;
cout<<"\n enter a string  \n";
cin.getline(string,80);
for(i=0;string[i]!='\0';i++)
len++;
for(i=0,j=len-1;i<len/2;i++,j--     )
{
if(string[i]!=string[j])
{ flag =0;
break;
}
}
if(flag==1)
cout<<"\n it is an pallondrime \n";
else
cout<<"\n it is not a pallondrimje \n";

getch ();
return 0;
}