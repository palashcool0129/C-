#include<iostream.h>
#include<conio.h>
int bsearch(int[],int,int);
int main()
{
clrscr();
int ar[50],item,index,n;
char ans='y';
while(ans=='y'||ans=='Y')
{
cout<<"enter desired array size(max..50)\n";
cin>>n;
cout<<"enter array elements \n";
for(int i=0;i<n;i++)
cin>>ar[i];
cout<<"\n enter array to be searched for..\n";
cin>>item;
index=bsearch(ar,n,item);
if(index==-1)
{cout<<"\n sorry!! given elemnet could not be found \n";}
else
{cout<<"\n element found at index:"<<index<<",position:"<<index+1<<endl;}
cout<<"want to enter more records (y/n)\n";
cin>>ans;
}
getch();
return 0;
}
int bsearch(int ar[],int size,int item)
{
int beg,last,mid;
beg=0;
last=size-1;
while(beg<=last)
{mid=(beg+last)/2;
if(item==ar[mid])
return mid;
else
if(item>ar[mid])
beg=mid+1;
else
last=mid-1;
}
return -1;
}