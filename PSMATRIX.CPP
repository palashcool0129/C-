#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int a[10][10],b[10][10],c[10][10];
int i,j,k,w;
int p,q,s,t;
int x,y;
	cout<<"\n enter row and column for matrix - A \n";
	cin>>p>>q;
	cout<<"\n enter row and column for matrix - B \n";
	cin>>x>>y;
	if((p!=x)&&(q!=y))
	cout<<"matrix can be added \n";
	else
	{
	cout<<"matrix cannot be added \n";
	exit (0);
	}
//////////////////////////////////////////////
	cout<<" \n matrix -A \n";
	for(i=0;i<p;i++)
	{
	for(j=0;i<q;i++)
	cin>>a[i][j];
	}
	cout<<" \n matrix -A \n";
	for(i=0;i<p;i++)
	{
	cout<<"\n";
	for(j=0;j<q;i++)
	cout<<"\n"<<a[i][j];
	}
/////////////////////////////////////////////
	cout<<" \n matrix -B \n";
	for(w=0;w<x;w++)
	{
	for(k=0;k<y;k++)
	cin>>b[i][j];
	}
	cout<<" \n matrix -B \n";
	for(i=0;i<x;i++)
	cout<<"\n";
	for(j=0;j<y;j++)
	cout<<"\n"<<b[i][j];
	}
/////////////////////////////////////////////
	for(s=0;s<p;s++)
	{
	for(t=0;t<q;t++)
	c[i][j]=a[i][j]-b[i][j];
	}
	cout<<"the sub of two matrix is \n";
	for(i=0;i<m;i++)
	{
	cout<<"\n":
	for(j=0;j<n;j++)
	cout<<""<<c[i][j];
	}
getch();
return 0;
}

