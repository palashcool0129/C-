#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{ clrscr();
  char*name;
  int*rollno;
  float*marks;
  int size;
  cout<<"how many elemets are there in array \n";
  cin>>size;
  rollno=new int[size];
  name=new char[size];
  marks=new float[size];
  if((!rollno)||(!name)||(!marks))
{ cout<<"out of memory \n";
  return 1;
}
 for(int i=0;i<size;i++)
{ cout<<"enter rollno of student "<<(i+1)<<"\t";
  cin>>rollno[i];
  cout<<"enter name of student "<<(i)<<"\t";
  (gets(name)[i]);
  cout<<"enter marks of student "<<(i+1)<<"\t";
  cin>>marks[i];
  cout<<endl;
}
 for(i=0;i<size;i++)
 cout<<"\t rollno :-\t"<<rollno[i]<<endl;
 cout<<"\t name :-\t"<<name[i]<<endl;
 cout<<"\t marks :-\t"<<marks[i]<<endl;
 delete[ ]rollno;
 delete[ ]name;
 delete[ ]marks;
getch();
return 0;
}

