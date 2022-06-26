#include<stdio.h>
#include<conio.h>
void fact(int*);
void main()
{
clrscr();
int a;
printf("enter a number \n");
scanf("%d",&a);
printf("\n");
fact(&a);
getch();
}
void fact(int *x)
{
int i,c=1;
for(i=1;i<=*x;i++)
{
c=c*i;
}
printf("factorial of %d is %d",*x,c);
}