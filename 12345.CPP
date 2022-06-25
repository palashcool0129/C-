#include<iostream.h>
#include<conio.h>
#include<process.h>
void bubblesort(int[],int);
int main()
{
clrscr();
int ar[50],item,n,index;
cout<<"\n How many elements do you want to create array with ?";
cin>>n;
cout<<"\n Enter aray elements.....";
for(i=0;i<n;i++)
cin>>ar[i];
bubblesort(ar,n);
cout<<"\nThe sorted array is shown as below.....";
for(i=0;i<n;i++)
cout<<endl;
return 0;
}
void bubblesort(intar[],int size)
{
int tmp,ctr=0;
