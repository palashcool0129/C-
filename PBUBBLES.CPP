#include<iostream.h>
#include<conio.h>
void bubblesort(int[],int);
int main()
{ clrscr();
  int ar[50],item,n,index;
  cout<<"how many elements do u want to reate array with ?\n";
  cin>>n;
  cout<<"\n enter array elemnets\n";
  for(int i=0;i<n;i++)
  cin>>ar[i];
  bubblesort(ar,n);
  cout<<"\n\n the sorted array is as shown below\n";
  for(i=0;i<n;i++)
  cout<<ar[i]<<"";
  cout<<endl;
  getch();
  return 0;
  }
void bubblesort(int ar[],int size)
{
int tmp,ctr=0;
for(int i=0;i<size;i++)
{ for(int j=0;j<(size-1);j++)
 { if(ar[j]>ar[j+1])
 { tmp=ar[j];
   ar[j]=ar[j+1];
   ar[j+1]=tmp; }
 }
 cout<<"array after iteration -"<<++ctr<<"-is";
 for(int k=0;k<size;k++)
 cout<<ar[k]<<" ";
 cout<<endl;
 }
}
