#include<iostream.h>
#include<conio.h>
#include<process.h>
int findpos(int[],int,int);
int main()
{
clrscr();
int ar[50],item,index,n;
cout<<"how many elements do you want to create array with? (max...50)\n";
cin>>n;
cout<<"\n enter array elements \n";
for(int i=0;i<n;i++)
cin>>ar[i];
char ch='y';
while(ch=='y'||ch=='y')
{
cout<<"\n enter elements to be inserted...";
cin>>item;
if(n==50)
{ cout<<"overflow \n";
  exit(1);
}
index=findpos(ar,n,item);
for(i=n;i>index;i--)
{ ar[i]=ar[i-1]; }
ar[index]=item;
n+=1;
cout<<"\n want to insert more elements?(y/n) \n";
cin>>ch;
}
cout<<"the array now is as shown below..\n";
for(i=0;i<n;i++)
cout<<ar[i]<<" ";
cout<<endl;
getch();
return 0;
}
int findpos(int[],int,int)
{
int pos;
if(item<ar[0])
  pos=0;
else
{ for(int i=0;i<size-1;i++)
 {if (ar[i]<=item&&item<ar[i+1])
   {pos=i+1;
    break;
   }
 }
if(i==size-1)
pos=size;
}
return pos;
}

