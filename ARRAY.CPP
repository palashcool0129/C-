#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
const int size=5;
float marks[size];
for(int i=0;i<size;i++)
{
cout<<" enter marks of student "<<i<<"\n";
cin>>marks[i];
if(marks[i]>=33)
cout<<" pass "<<"\n";
else if (marks[i]<33)
cout<<" fail "<<"\n";
}
cout<<"\n";
for(i=0;i<size;i++)
cout<<" marks ["<<i<<"]="<<marks[i];
getch();
return 0 ;
}
