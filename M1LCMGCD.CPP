#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b;
 cout<<"a : "; cin>>a;
 cout<<"b : "; cin>>b;
 int p = a * b;
 while(a != b)
 {
  if(a>b) a-=b;
  else    b-=a;
 }
 cout<<"GCD : "<<a<<endl;
 cout<<"LCM : "<<p/a;
 getch();
}
