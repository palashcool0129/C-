#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct Node  {  int info;
Node*next;
} *top,*newptr,*save,*ptr;
Node*Create_New_Node(int);
void Push(Node*);
void Display(Node*);
void Pop();
int main()
{ top=NULL;
int inf;  char ch='y';
while(ch=='y'||ch=='Y')
{  cout<<"\n Enter INFormation for the new node...";
cin>>inf;
newptr=Create_New_Node(inf);
if(newptr==NULL)
{  cout<<" CAnnot create new node!!Aborting!!\n";
system("pause");
exit(1);
}
Push(newptr);
cout<<"\n Press Y to enter more nodes,N to exit....";
cin>>ch;
}
clrscr();

do
{ cout<<"The Stack now is:\n";
Display(top);    system("pause");
cout<<"Want to pop an element?(y/n)...";
cin>>ch;
f(ch=='y'||ch=='Y') Pop();
} while(ch=='y'||ch=='Y');
return 0;
}
Node*Create_New_Node(int n)
{  ptr= new Node;
ptr->info=n; ptr->next=NULL;
return ptr;
}
void Push(Node*np)
{ if(top==NULL)  top=np;
else
{ save=top; top=np;
np->next=save;
}
}
void Pop()
{ if(top==NULL) cout<<"UNDERFLOW!!!!\n";
else
{ ptr=top;  top=top->next;
delete ptr;
}
}
void Display(Node*np)
{  while(np!=NULL)
{ cout<<np->info<<"->";
np=np->next;
}
cout<<"!!!\n";
}