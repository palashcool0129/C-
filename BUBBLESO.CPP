#include<iostream.h>
void BubbleSort(int[],int);
int main()
{ int AR[50],ITEM,N,index;
cout<<"How many elements do U want to create array with?(max 50)...";
cin>>N;
cout<<"\n Enter Array Elements...\n";
for(int i=0;i<N;i++)
cin>>AR[i];
BubbleSote(AR,N);
cout<<"\n\nThe Sorted array is as shown below...\n";
for(i=0;i<N;i++)
cout<<AR[i]<<"  ";
cout<<endl;
return 0;
}
void BubbleSort(int AR[],int size)
{
int tmp ,ctr=0;
for(int i=0;i<size;i++)
{ for(int j=0;j<(size-1)--i;j++)
{ if (AR[j]>AR[j+1])
{ tmp=AR[j];