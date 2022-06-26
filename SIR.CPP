#include<iostream.h>
#include<conio.h>
int main()
{clrscr();
int X[]={10,25,30,55,110};
int *p=X;
//cout<<"X \n"<<X;
while(*p<110)
{ if(*p%3!=0)
*p=*p+1;
else
*p=*p+2;
*p++;
//cout<<"\n p++ \n"<<p<<"\n";
}
for(int I=4;I>=1;I--)
{
cout<<X[I]<<"*";
if(I%3==0)cout<<endl;
}
cout<<X[0]*3<<endl;
getch();
return 0;
}