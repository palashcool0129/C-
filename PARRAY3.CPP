#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a[20],size,i,flag=0,num,pos;
	cout<<"\n enter the elments in the array";
	cin>>size;
	cout<<"\n enter the elements in the array";
	for(i=0;i<size;i++)
	cin>>a[i];
	cout<<"\n enter the elemnets to be searched for";
	cin>>num;
	for(i=0;i<size;i++)
	if(a[i]==num)
{
flag=1;
pos=i;
break;
}
if (flag==0)
cout<<"\n elment not found \n";
else
cout<<"\n elment found at position"<<(pos+1);
getch();
return 0;
}
