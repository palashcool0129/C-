#include<iostream.h>
#include<fstream.h>
int main()
{ void EUCount();
{  ifstream fin;
fin.open("IMP.TXT",ios::in);
char ch; int ecount=0,ucount=0;
while(!fin.eof())
{
fin.get(ch);
if(ch=='e'||ch=='E')
ecount++;
else if(ch=='u'|ch=='U')
ucount++;
}
cout<<"E:"<<ecount<<endl;
cout<<"U:"<<ucount<<endl;
fin.close();
 }
return 0;
}