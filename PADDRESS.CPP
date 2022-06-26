#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int*ip[5];
int f=65,s=67,t=69,fo=70,fi=75;
ip[0]=&f;
ip[1]=&s;
ip[2]=&t;
ip[3]=&fo;
ip[4]=&fi;
for(int i=0;i<5;i++)
cout<<"the pointer ip ["<<i<<"] points to"<<*ip[i]<<"\n";
cout<<"the base address of array ip of pointers is"<<ip<<"\n";
for(i=0;i<5;i++)
cout<<"the address stored in ip ["<<i<<"] is"<<ip[i]<<"\n";
getch();
return 0;
}