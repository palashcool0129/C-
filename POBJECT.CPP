#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class item{ int itemcode[10];
	    float it_price[10];
	    public:
	    void initialize(void);
	    float largest (void);
	    float sum(void);
	    void display_items(void);
	    };
void item::initialize(void);
      {   for(int i=0;i<10;i++)
	{   cout<<"\n"<<"item no:"<<(i+1);
	    cout<<"\n"<<"enter item code:";
	    cin>>itemcode[i];
	    cout<<"\n"<<"enter item price:";
	    cin>>it_price[i];
	    cout<<"\n";
	}
      }
float item::largest(void);
      {  float large=it_price[0];
	 for(i=1;i<50;i++)
	 {
	 if(large<it_price[i])




