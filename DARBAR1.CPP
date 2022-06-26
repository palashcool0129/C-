#include<iostream.h>
#include<conio.h>
int large(int[],int);
int main ()
{      clrscr();
int  A[50],i,n,max;
cout<<"\n Enter the size of array:";
cin>>n;
cout<<"\n Emter the element of array:";
for(i=0;i<n; i++);
cin>>A[i];
max=large(A,n);
cout<<"\n Largest element of the given array :"<<max;
return 0;
}
int large(int b[],int n)
{
int max,i;
max=b[0];

 for(i=1;i<n;i++)



 {
 if(max<b[i])
    max=b[i];
    }
    return max;

    }