#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
int Remove(int[]);
int Insert(int[],int);
void Display(int[],int,int);
const int size=50;
int Queue[size],front=-1,rear=-1;
int main()
{ int Item,res;   char ch='y';
clrscr();
while(ch=='y'||ch=='Y')
{ cout<<"\n Enter item for insertion:" ;
cin>>Item;
res=Insert(Queue,Item);
if(res==-1)
{ cout<<"OVERFLOW!!!!Aborting!!n";      exit(1);}
cout<<"\n Now the Queue(Front...to...Rear)is:\n";
Display(Queue,front,rear);
cout<<"\n Want to insert more elements ? (y/n).....";
cin>>ch;
}
cout<<"Now deletion of element begins..\n";
ch='y';
while(ch=='y'||ch=='Y')
{res=Remove(Queue);
if(res==-1)
{  cout<<"UNDERFLOW!!!!Aborting!!!\n";     exit(1);}
else
{
cout<<"\n Element deleted is:"<<res<<endl;
cout<<"Now the Queue(Front....to.....Rear)is:\b";
Display(Queue,front,rear);
}
cout<<"Want to delete more elements?(y/n)..."; cin>>ch;
}
return 0;}
int Insert(int Queue[],int ele)
{  if(rear==size-1)return -1;
else if(rear==-1)
{  front=rear=0;
Queue[rear]=ele;
}
else
{   rear++;
Queue[rear]=ele;
}
return 0;
}
int Remove(int Queue[])
{  int ret;
if(front==-1)  return -1;
else
{ret=Queue[front];
if(front==rear)  front=rear=-1;
else front++;
}
return ret;
}
void Display(int Queue[],int front,int rear)
{ if(front==-1) return;
for(int i= front;i<rear;i++)
cout<<Queue[i]<<"<- \t";
cout<<Queue[rear]<<endl;
}











