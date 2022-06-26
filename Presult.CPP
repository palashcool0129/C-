#include<iostream.h>
#include<conio.h>
#include<process.h>
void main ()
{
clrscr();
char studs_name[40],father_name[40],address[30],results,pass;
long int scholarno,rollno,a,b,c,d,e,sum,i=0;
float percentage;
	cout<<"		   CBSE results class 10th		\n";

	cout<<"enter students name	\n";
	cin>>studs_name;
	cout<<"father name	\n";
	cin>>father_name;
	cout<<"enter address	\n";
	cin>>address;
	cout<<"enter scholar number	\n";
	cin>>scholarno;
	cout<<"enter roll no		\n";
	cin>>rollno;

	cout<<"enter marks of english = ";
	cin>>a;cout<<"\n";
	cout<<"enter marks of hindi = ";
	cin>>b;cout<<"\n";
	cout<<"enter marks of maths = ";
	cin>>c;cout<<"\n";
	cout<<"enter marks of science = ";
	cin>>d;cout<<"\n";
	cout<<"enter marks os social science = ";
	cin>>e;cout<<"\n";

	sum=a+b+c+d+e;
	cout<<"total marks of students = ";
	cout<<sum<<"\n";

	percentage=(sum/5);
	cout<<"total percentage	= ";
	cout<<percentage<<"\n";

	results=(((a>=33)&&(b>=33)&&(c>=33)&&(d>=33)&&(e>=33)?('p'):('f')));
	cout<<"results ="<<results;
	if (results=='p')
	cout<<"ass	\n";
	if (results=='f')
	cout<<"ail	\n";

	if (a<=33)
	cout<<"supple in english	\n";
	else (i=i+1);
	if (b<=33)
	cout<<"supple in hindi		\n";
	else (i=i+1);
	if (c<=33)
	cout<<"supple in maths		\n";
	else (i=i+1);
	if (d<=33)
	cout<<"supple in science	\n";
	else (i=i+1);
	if (e<=33)
	cout<<"supple in social		\n";
	else (i=i+1);

	if (results=='p')
	cout<<"the student is qualified to the 11th class	\n";
	if (results=='f')
	cout<<"the student has to repeat the class	\n";

	results=((percentage>=33)?('p'):('f'));
	cout<<"the student is "<<results;
	if (results=='p')
	cout<<"ass	\n";
	if (results=='f')
	cout<<"ail	\n";

results=(((percentage>=33)?((a>=33)?('p'):(b>=33)?('p'):(c>=33)?('p'):(d>=33)?('p'):(e>=33)?('p'):('f')):('f')));
	cout<<results;
	if (results=='p')
	cout<<"ass	\n";
	if (results=='f')
	cout<<"ail	\n";




getch ();
}




