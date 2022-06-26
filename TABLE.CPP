#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int num,sum,i,c,even,odd;
	cout<<"enter a number"<<"\n";
	cin>>num;
	for(i=1,sum=0;i<=10;++i)
	{ c=num*i;
	  cout<<"\n"<<c;
	if(c%2==0)
	{ cout<<"  even";
	}
	else
	{ cout<<"  odd";
	}
	if(c%2==0)
	{ cout<<"even";
	}
	else
	{ cout<<"odd";
	}

	sum=c+sum;
	cout<<"	sum"<<sum;
	}


for	(i=1,sum=0;i<=num;++i)
	{
	sum=sum+i;
	}
	cout<<"\n";
	cout<<"the sum of num"<<sum<<"\n";
getch();
return 0;
}