#include<iostream.h>
#include<conio.h>
const int max=10;
int main()
{
clrscr();
int a[max][max],i,j,sbelow=0,sabove=0,size;
	cout<<"\n enter the size of square matrix :";
	cin>>size;
	cout<<"enter the elements :\n";
	for(i=0;i<size;i++)
	for(j=0;j<size;j++)
	cin>>a[i][j];
	cout<<"\n given matrix :";
	for(i=0;i<size;i++)
	{
	cout<<"\n";
	for(j=0;j<size;j++)
	cout<<a[i][j]<<"";
	}
	for(i=0;i<size;i++)
	for(j=0;j<size;j++)
	if(i>j)
	sbelow =sbelow+a[i][j];
	cout<<"\n sum of elements below diagonal :"<<sbelow;
	if(i<j)
	sabove=sabove+a[i][j];
	cout<<"\n sum of elements above diagonal :"<<sabove;
getch();
return 0;
}