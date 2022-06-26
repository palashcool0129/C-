#include<iostream.h>
#include<stdio.h>
class GIFTS
{ int ID; char Gift[20], Remarks[20];float price;
public:
void Takeonstock()
{ cin>>ID; gets(Remarks); cin>>price;
}
void See()
{  cout<<ID<<":"<<Gift<<":"<<price<<":"<<Remarks<<endl;
}
char*GetRemarks()  {return Remarks;}
};

