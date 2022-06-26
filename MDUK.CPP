#include<iostream.h>
#include<conio.h>
#include<process.h>
int main()
{
clrscr();
int a[5][5],b[5][5],c[5][5];
int i,j,m,n,p,q;
cout<<"\nENTER THE MATRICES-A(ROW AND COLOUM):";
cin>>m>>n;
cout<<"\nENTER THE MATRICES-B(ROW AND COLOUM):";
cin>>p>>q;
{
if((m==p)&&(n==q))
cout<<"\nMATRICES CAN BE ADDED\n";
else
{
cout<<"\nMATRICES CAN NOT BE ADDED\n";
exit(0);
}
}
cout<<"\nENTER MATRICES-A:\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nENTER MATRICES-B:\n";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cin>>b[i][j];
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
c[i][j] = a[i][j] + b[i][j];
}
cout<<"\nTHE SUM OF MATRICES ARE:\n";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
cout<<" "<<c[i][j];
}
getch();
return 0;
}

