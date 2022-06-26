#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int i,j;
for(i=0;i<=5;i++)
{
printf("/n");
for(j=0;j<=5;j++)
{
for(j=i;j>0;j--)
printf("%d",j);
}
}
printf("/n");
getch();
}
