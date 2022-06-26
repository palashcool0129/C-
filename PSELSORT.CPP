#include<iostream.h>
#include<conio.h>
void selsort(int[],int);
int main()
{ clrscr();
  int ar[50],item,n,index;
  cout<<"how many elements do u want to reate array with ?\n";
  cin>>n;
  cout<<"\n enter array elemnets\n";
  for(int i=0;i<n;i++)
  cin>>ar[i];
  selsort(ar,n);
  cout<<"\n\n the sorted array is as shown below\n";
  for(i=0;i<n;i++)
  cout<<ar[i]<<"";
  cout<<endl;
  getch();
  return 0;
  }
void selsort(int ar[],int size)
{ int small,pos,tmp;
  for(int i=0;i<size-1;i++)
 { small=ar[i];
   pos=i;
   for(int j=j+1;j<size;j++)
 {if(ar[j]<small)
  { small=ar[j];
    pos=j;
  }
  }
  tmp=ar[i];
  ar[i]=ar[pos];
  ar[pos]=tmp;
  cout<<"\n array after pass-"<<i+1<<"-is:";
  for(j=0;j<size;j++)
  cout<<ar[j]<<" ";
  }
 }