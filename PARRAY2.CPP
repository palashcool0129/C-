#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
double price[21],sum,i,average,product;
sum=0;
average=0;
product=1;
	for (i=1;i<6;++i)
	{
	cout<<"enter price for item"<<i<<";";
	cin>>price[i];
	sum=sum+price[i];
	product=product+price[i];
	}
	average=sum/20;
	cout<<"sum of all prices "<<sum<<endl;
	cout<<"product of all prices "<<product<<endl;
	cout<<"average of all prices "<<average<<endl;
getch();
return 0;
}



