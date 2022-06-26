#include<iostream.h>
#include<conio.h>
int calc(int u)
{
if(u%2==0)
return u+10;
else
return u*2;
}
void pattern (char m, int b=2)
{
for(int cnt=0;cnt<b;cnt++)
cout<<calc(cnt)<<m;
cout<<endl;
}
void main()
{
pattern('*');
pattern('#',4);
pattern('@',6);
}

