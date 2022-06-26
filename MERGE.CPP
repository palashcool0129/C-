#include<iostream>
#include<conio.h>
using namespace std;
void merge(int[][50],int ,int[][50],int ,int[][50]);
int main()
{
int a[50][50],b[50][50],c[50][50];
int m,n,q,p,mn=0,pq=0,rs;
cout<<"How many elements do U want to create array with?(max.50)....";
cin>>m>>n;
cout<<"\n Enter first Array elements (Asc order)\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
cin>>a[i][j];
cout<<endl;
}
mn=m+n;
cout<<"How many elements do U want to create array with?(max.50)....";
cin>>p>>q;
cout<<"\n Enter Second Array elements (Dsc order)\n";
for(int i=0;i<p;i++)
{
for(int j=0;j<q;j++)
cin>>b[i][j];
cout<<endl;
}
pq=p+q;
rs=mn+pq;
merge(a,m,b,n,c);
cout<<"\n\n the merged array is as shown below... \n";
for(int i=0;i<mn;i++)
{
for(int j=0;j<pq;j++)
cout<<c[i][j]<<" ";
cout<<endl;
}
getch();
return 0;
}
void merge(int [][50],int ,int [][50],int ,int [][50])
{ int A,B,C,rs,a,b,c;
  for(A=0,B=0,C=0; A<rs && B>=0;)
{ if(A[a]<=B[b])C[c++]=A[a++];
  else C[c++]=B[b--];
}
if(A<mn)
 { while(A<mn)
   C[c++]=A[a++];
 }
 else
 { while(b>=0)
   C[c++]=B[b--];
 }
}

