#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
main()
{
clrscr();
randomize();
int p,num,rndnum;
cout<<"enter an number";
cin>>num;
rndnum=random(num)+7;
cout<<rndnum<<"\n";
for(p=0;p<=rndnum;p++)
cout<<p<<"\n";
getch();
return 0;
}
