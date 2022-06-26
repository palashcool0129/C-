#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int*val ,*Rsum ,*Csum;
int p,q,i,j;
 cout<<"enter row and columns \n";
 cin>>p>>q;
 val=new int[p*q];
 Rsum=new int[p];
 Csum=new int[q];
 for(i=0;i<p;i++)
{
 cout<<"\n enter elements of row \n"<<(i+1)<<":";
 Rsum[i]=0;
 for(int j=0;j<q;j++)
{ cin>>val[i*q+j];
  Rsum[i]=Rsum[i]+val[i*q+j];
}
}
 for(j=0;j<q;j++)
{ Csum[j]=0;
  for(i=0;i<p;i++)
{ Csum[j]=Csum[j]+val[i*q+j]; }
}
 cout<<"\n the given array along with row-sum and column-sum is:-\n\n";
 for(i=0;i<p;i++)
{  for(j=0;j<q;j++)
 { cout<<val[i*q+j]<<"\t"; }
   cout<<Rsum[i]<<endl;
}
 for(j=0;j<q;j++)
{ cout<<Csum[j]<<"\t"; }
  cout<<endl;
getch();
return 0;
}
