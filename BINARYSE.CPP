#include<iostream.h>
int Bsearch(int[],int,int);
int  main()
{ int AR[50],ITEM,N,index;
cout<<"Enter Desire Array Size(Max 50)....";
cin>>N;
cout<<"\n Enter Element Arra Elements(must be sorted in  asc order) \n";
for(int i=0;i<N;i++)
cin>>AR[i];
cout<<"Enter Element to ne searched for...";
cin>>ITEM;
index=Bsearch(AR,N,ITEM);
if(index==-1)
cout<<"\n Sorry!!Given  element could not be found \n";
else
cout<<"\n Element found at index:"<<index<<",Position:"<<index +1<<endl;
return 0;
}
int Bsearch(int AR[],int size ,int item )
{ int beg,last,mid;
beg=0;   last=size-1;
while(beg<=last)
{ mid=(beg+last)/2;
if(item==AR[mid]) return mid;
else if (item>AR[mid]) beg =mid +1;
else last=mid-1;
}
return -1;
}
