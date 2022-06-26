#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class base{ public: int a;
	  };
class d1: virtual public base
	  { public: int b;
	  };
class d2: virtual public base
	  { public: int c;
	  };
class d3: public d1,public d2
	  { public: int total;
	  };
int main()
{
clrscr();
d3 ob;
ob.a=25;
ob.b=50;
ob.c=75;
ob.total=ob.a+ob.b+ob.c;
cout<<"ob.a="<<ob.a<<"\t"<<"ob.b="<<ob.b<<"\n"<<"ob.c="<<ob.c<<"\t"<<"ob.total="<<ob.total<<endl;
getch();
return 0;
}
