#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class base1 {
	 protected: int a;
	 public: base1(int x)
		{ a=x;
		  cout<<"constructing base1 \n"; }
		~base1()
		{ cout<<"destructing base 1 \n"; }
		};
class base2 {
	 protected : int b;
	 public: base2(int y)
		{ b=y;
		  cout<<"constructing base 2 \n"; }
		  ~base2()
		{ cout<<"destructing base 2 \n";  }
		};
class derived : public base2,public base1
		{ int c;
	 public:
		derived(int i,int j,int k):base2(i),base1(j)
		{ c=k;
		cout<<"constructing derived \n";
		};
		~derived()
		{ cout<<"destructing derived \n"; }
		void show()
		{ cout<<"1="<<a<<"\t 2="<<b<<"\t 3="<<c<<"\n"; }
		};
int main()
{
clrscr();
derived ob(14,15,16);
ob.show();
getch();
return 0;
}

