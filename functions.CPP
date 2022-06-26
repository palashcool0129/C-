#include<iostream.h>
#include<conio.h>
long int cube(int);
long int area(int,int);
long int area(int,int,int);
int main()
{
clrscr();
int num,le,br,hg;
	  cout<<"Enter a number	\n";
	  cin>>num;
	  cout<<"\n"<<"the cube of"<<num<<"is"
	  <<cube(num)<<"		\n";

	  cout<<"area of rectangle	\n";
	  cout<<"enter length of rectangle	\n";
	  cin>>le;
	  cout<<"enter breadth of rectangle	\n";
	  cin>>br;
	  cout<<"\n"<<"the area of rectangle is	"<<le*br<<"		\n";

	  cout<<"area of cuboid	\n";
	  cout<<"enter length 	\n";
	  cin>>le;
	  cout<<"enter breadth	\n";
	  cin>>br;
	  cout<<"enter height	\n";
	  cin>>hg;
	  cout<<"\n"<<"the area of cuboid is"<<le*br*hg<<"\n";

return 0;
}

long int cube(int a)
{ return a*a*a;
}


long int area(int l,int b)
{return l*b;
}

long int area(int l,int b,int h)
{return l*b*h;
}
