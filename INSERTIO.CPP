#include<iostream.h>
#include<process.h>
# include<conio.h>
int FindPos(int[],int,int);
int main()
{    clrscr();
 int Ar[5],ITEM,N,index;
cout<<"How many elements do U want to create array with?(max.50)....";
cin>>N;
cout<<"\n Enter Array elements(must be sorted in Asc order)\n";
for(int i=0;i<=N;i++)
cin>>Ar[i];
 char ch ='y';
while (ch=='y'||ch=='Y')
{ cout<<"\n Entre element to be inserted ....";
  cin>>ITEM;
if(N==5)
{ cout<<"Overflow!!\n";
}
exit(1);

index=FindPos(Ar,N,ITEM);
for(i=N;i>index;i--)
{Ar[i]=Ar[i-1];}
Ar[index]=ITEM;
N+=1;
cout<<"\n Want to insert more elements?(y/n)....";
cin>>ch;
}
cout<<"The array now is shown below...\n";
for(i=0;i<N;i++)
cout<<Ar[i]<<"  ";
cout<<endl;
getch();
return 0;
}
int FindPos(int Ar[],int size,int item)
{ int pos;
if(item<Ar[0]) pos=0;
else { for (int i=0;i<size-1;i++)
{ if (Ar[i]<=item && item<Ar[i+1])
{ pos=i+1; break;}
}
if (i==size-1) pos=size;
}
return pos;
}
