#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct point
{
int x,y;
};
void show(point p)
{
	cout<<p.x<<':'<<p.y<<endl;
}
int main()
{
clrscr();
	point u={20,10},v,w;
	v=u;
	v.x+=20;
	w=v;
	u.y+=10;
	u.x+=5;
	w.x-=5;
	show(u);
	show(v);
	show(w);
getch();
return 0;
}