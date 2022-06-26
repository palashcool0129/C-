#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class ITEM { int itemcode[50];
float it_price[50];
public:
void initialize(void);
float largest(void);
float sum(void);
}
void initialize(void)
{
for (int i=0;i<=10;i++)
cout<<"\n Enter Item Code"<< : ";
cin>>i;