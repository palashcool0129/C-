#include<stdio.h>
#include<conio.h>
struct student
{
int roll_no;
char name[30];
int age;
int marks;
}a;
void main()
{
clrscr();
int n,i;
printf("enter how many students details to record \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter roll no of student \n");
scanf("%d",&a.roll_no);
printf("enter name of student \n");
scanf("%s",&a.name);
printf("enter age of student \n");
scanf("%d",&a.age);
printf("enter marks of student \n");
scanf("%d",&a.marks);
}
clrscr();
for(i=0;i<n;i++)
{
printf("roll_no = %d, \t name = %s, \t age = %d, \t marks = %d \n",a.roll_no,a.name,a.age,a.marks);
}
getch();
}