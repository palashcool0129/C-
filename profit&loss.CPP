#include<iostream.h>
#include<conio.h>
main ()
{
long int cost_price,selling_price,profit,loss,c;
 clrscr ();
	cout<<"profit or loss	\n";

	cout<<"enter cost price	";
	cin>>cost_price;

	cout<<"enter selling price	";
	cin>>selling_price;
	profit=selling_price-cost_price;
	loss=cost_price-selling_price;
	cout<<profit<<loss<<"	\n";

	if (selling_price>cost_price)
	c=profit;
	if (selling_price<cost_price)
	c=loss;
	cout<<c;

 getch ();
return 0;
}