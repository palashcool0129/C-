#include<iostream.h>
#include<conio.h>
int main()
void merge(int [],int,int[],int,int[])
{
int a[50],b[50],c[50],mn=0,m,n,i;
cout<<"\n how many elements?";
cin>>m;
cout<<"\n enter the elements of first elelments";
for (i=0;i<m;i++)
{
cin>>a[i];
}
cout<<"how many elements of 2nd array";
cin>>n;
cout<<"enter the elements of 2nd array";
for (i=0;i<n;i++)
{
cin>>b[i];
}
merge(a,m,b,n,c);
cout<<"\n tthe merged array are as follows";
for (i=0;i<mn;i++)
{
cout<<c[i];
}
getch();
return 0;
}

