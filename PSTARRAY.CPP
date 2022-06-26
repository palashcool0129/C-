#include<iostream.h>
#include<conio.h>
const int size =10;
struct student
{
int roll no;
float meng;
float mcomp;
float mmath;
}
studarray[size],t1,t2;
float total,avg,top1=0,top2=0;
int ndist=0,nfail=0;
void studresult()
{
for(int i=0;i<size;i++)
{
	total=studarrray[i].meng+studarrray[i].mcomp+studarrray[i].mmath;
	avg=total/3;
	if(avg>=75)
	ndist++;
	else if(avg<40)
	nfail++;
	if(top1<avg)
	{  top1=avg;
	   t1=studarray[i];
	}
	else if(top2<avg&&avg<=top1)
	{  top2=avg;
	   t2=studarray[i];
	}
}
