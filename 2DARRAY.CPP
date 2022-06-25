#include<iostream.h>
#include<process.h>
#include<conio.h>
int main()
{ clrscr();
int a[10][10],b[10][10],c[10][10];
int i,j,m,n,p,q;

cout<<"\input the order of martrix :-A";
cin>>m>>n;
cout<<"\ninput the order of matrix :-B";
cin>>p>>q;
if((m==p)&&(n==q))
cout<<"\n The can be added";
else
{ cout<<"\n matrix can not be added";
 exit(0);
 }




{ cout<<"\n Enter matrix A:-";
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
 cin>>a[i][j];
 }
 cout<<"\n Enter the matrix B:-";
 for(i=0;i<p;i++)
 { for(j=0;j<q;j++);
 cin>>b[i][j];
 }
 for(i=0;i<m;i++)
 { for(j=0;j<n;j++)
 c[i][j]=a[i][j]+b[i][j];
 }
 }


 cout<<"\n the sum of the two matrix  is:";
    for(i=0;i<m;i++)
 {   cout<<"\n";
    for(j=0;j<n;j++)
    cout<< "   "<<c[i][j];
    }
    getch();
    return 0;
}
