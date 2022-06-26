//*********************************************************************
//Header Files used
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 10
//**********************************************************************
int main()
{
clrscr();
	int item, choice, i;
	int arr_stack[MAX_SIZE];
	int top=0;
	int exit=1;
do {
//**********************************************************************
//Enter Your Choices
	cout<<"\n***************************************************************";
	cout << "\n\nStack Main Menu";
	cout << "\n1.Push \n2.Pop \n3.Display \nOthers to exit";
	cout<<"\n***************************************************************";
	cout << "\nEnter Your Choice : ";
	cin>>choice;
//**********************************************************************
switch (choice)
{
//**********************************************************************
	case 1: //for insertion
		if(top==MAX_SIZE)
		cout << "\nOVERFLOW!!!";
		else
		{ clrscr();
		cout <<"\nEnter The Value to be pushed: ";
		cin>>item;
		cout <<"\nPosition:"<<top<<",Pushed Value:"<<item;
		arr_stack[top++]=item;
		}
	break;
//***********************************************************************
	case 2: //for deletion
		clrscr();
		if(top==0)
		cout <<"\nStack is Empty!";
		else
		{
		--top;
		cout <<"\nPosition:"<<top<<",Popped Value:"<<arr_stack[top];
		}
	break;
//***********************************************************************
	case 3://for displaying
		clrscr();
		cout <<"\nStack Size:"<<top;
		for(i=(top - 1);i>=0;i--)
		cout<<"\nPosition : "<<i<<",Value  :"<<arr_stack[i];
	break;
//************************************************************************
	default:
	exit=0;
	break;
//************************************************************************
}
}
while(exit);    //end of program
getch();
return 0;
}