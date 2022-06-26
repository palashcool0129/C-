#include<iostream.h>
#include<process.h>
struct Node {
		 int info;
		 Node*next;
		 }*start,*newptr,*save,*ptr;
		 Node*Create_New_Node9int);
		 void Insert_Beg(Node*);
		 void Display(Node*);
		 int main()
		 {
		 start=NULL;
		 int inf;  char ch='y';
		 while(ch=='y'||ch=='Y')
		 {
		 cout<<"\n Enter INFOrmation  for the new node....";
		 cin>>inf;
		 cout<<"\n creating New Node||Press Enter to continue....";
		 system("pause");
                 