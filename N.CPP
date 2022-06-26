#include<iostream.h>
#include<process.h>
struct Node{
		   int info;
		   Node*next;
		   }*start,*newptr,*save,*ptr;
	  Node*Create_New_Node(int);
	 void Insert_Beg(Node*);
	 int main()
	 {
	 start=NULL;
	 int inf; char ch='y';
	 while(ch=='y'||ch='Y')
	 {
	 system("cls");
	  cout<<"Enter INFOrmationfor the new node....";
	  cin>>inf;
	  cout<<"\n Creating New Node!!Press Enter to continue....";
	  system("pause");
	  newptr=Create_New_Node(inf);
	  if(newptr!=NULL)
	  {
	    cout<<"\n\nNew Node Created Sucessfully. Press Enter to continue....";
	    system("pause");
	    }
	    else
	    {
	    cout<<"\n Cannot create new node!!Aborting!!\n"; system("pause");
	    exit(1);
	    }
	    cout<<"\n\nNow Inserting this node in the begining of list...\n":
	    cout<<"Press enter to continue"