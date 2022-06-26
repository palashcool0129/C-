#include<iostream.h>
#include<conio.h>
#include<process.h>
main()
{
clrscr();
int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10];
int i,j;
int m,n;
int p,q;
int u,v;
int ans;
char ans1='y';
	cout<<"matrix calculator \n";
	cout<<"\n input row and column of matrix A \n";
	cin>>m>>n;
	cout<<"\n input row and column of matrix B \n";
	cin>>p>>q;
	if((m==p)&&(n==q))
	cout<<"matrix can be calculated \n";
	else
	{
	cout<<"matrix cannot be calculated \n";
	exit(0);
	}
u=m;
v=p;
	cout<<"input matrix A \n";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	cin>>a[i][j];
	}
	cout<<" \n matrix A \n";
	for(i=0;i<m;i++)
	{
	cout<<"\n";
	for(j=0;j<n;j++)
	cout<<" "<<a[i][j];
	}
	cout<<"\n";
	cout<<"input matrix B \n";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	cin>>b[i][j];
	}
	cout<<"\n matrix B \n";
	for(i=0;i<m;i++)
	{
	cout<<"\n";
	for(j=0;j<n;j++)
	cout<<" "<<b[i][j];
	}
	cout<<"\n"<<endl;
	while(ans1=='y'||ans1=='Y')
	{
	cout<<"matrix calculator \n";
	cout<<"1.addition of matrix \n";
	cout<<"2.subraction of matrix \n";
	cout<<"3.multiplication of matrix \n";
	cout<<"4.transpose of matrix \n";
	cout<<"5.merging of matrix \n";
	cout<<"enter your choice(1-5) \n";
	cin>>ans;
switch(ans)
{
case 1: cout<<"the sum of two matrix is: \n";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	c[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<m;i++)
	{
	cout<<"\n";
	for(j=0;j<n;j++)
	cout<<" "<<c[i][j];
	cout<<"\n";
	}
	break;
case 2: cout<<"the subraction of two matrix is: \n";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	c[i][j]=a[i][j]-b[i][j];
	}
	for(i=0;i<m;i++)
	{
	cout<<"\n";
	for(j=0;j<n;j++)
	cout<<" "<<c[i][j];
	cout<<"\n";
	}
	break;
case 3: cout<<"the multiplication of two matrix is: \n";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	c[i][j]=a[i][j]*b[i][j];
	}
	for(i=0;i<m;i++)
	{
	cout<<"\n";
	for(j=0;j<n;j++)
	cout<<" "<<c[i][j];
	cout<<"\n";
	}
	break;
case 4: cout<<"the transpose of a matrix: \n";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	e[j][i]=a[i][j];
	}
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	d[j][i]=b[i][j];
	}
	for(i=0;i<m;i++)
	{
	cout<<"\n";
	for(j=0;j<n;j++)
	cout<<" "<<e[i][j];
	}
	for(i=0;i<m;i++)
	{
	cout<<"\n";
	for(j=0;j<n;j++)
	cout<<" "<<d[i][j];
	}
	break;
case 5: cout<<"the merging of matrix \n";
	{
	for(i=0;i<u;i++)
	{
	cout<<"\n";
	for(j=0;j<v;j++)
	cout<<" "<<a[i][j]<<" "<<b[i][j];
	cout<<"\n";
	}
	}
	break;
case 6: cout<<"enter first five choices only \n";
	break;
default:cout<<"wrong choice \n";
	break;
	}
	cout<<"\n want to enter more choices \n";
	cin>>ans1;
	}

getch();
return 0;
}