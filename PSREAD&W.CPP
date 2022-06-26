#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
struct customer { char name[50];
		  float balance;
		};
int main()
{
clrscr();
customer avac;
strcpy(avac.name," tina marshall ");
avac.balance=21310.10;
ofstream fout;
fout.open("aving",ios::out|ios::in|ios::binary);
//fin.read((char*)&savac,sizeof(customer));
fout.close();
ifstream fin;
fin.open("aving",ios::in|ios::binary);
fin.read((char*)&avac,sizeof(customer));
cout<<avac.name;
cout<<"has the balance amount of Rs.."<<avac.balance<<"\n";
fin.close();
getch();
return 0;
}