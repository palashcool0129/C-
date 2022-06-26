#include<iostream.h>
#include<conio.h>
void Selsort(int[],int);
int main()
{
int AR[50],ITEM,N,Index;
cout<<"HOW MANY ELEMENT DO YOU WANT TO INSERT IN ARRAY:";
cin>>N;
cout<<"ENTER ELEMENT OF ARRAY:";
for(int i=0;i<N;i++)
cin>>AR[i];
Selsort(AR,N);
cout<<"THE SORTED ARRAY IS:";
for(i=0;i<N;i++)
cout<<AR[i]<<" ";
cout<<endl;
return 0;
}
void SelSort(int AR[],int size)
{ int small,pos,tmp;
for(int i=0;i<size-1;i++)
{
small = AR[i];
pos=i;
for(int j=i+1;j<size;j++)
{if(AR[j]<small)
{small=AR[j];
pos=j;}
}
tmp=AR[i];
AR[i]=AR[pos];
AR[pos]=tmp;
cout<<"\nARRAY AFTER PASS "<<i+1<<"is";
for(j=0;j<size;j++);
cout<<AR[j]<<" ";
}
}
