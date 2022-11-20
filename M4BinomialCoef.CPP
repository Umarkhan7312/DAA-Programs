#include<iostream.h>
#include<conio.h>

class bino
{
   int n,i; // here n is no of levels and i is iterator
 public:
   void get();
   int binomial(int,int);
};

void bino :: get()
{
 cout<<"Enter level : ";
 cin>>n;
 for(i=0;i<=n;i++)
   cout<<binomial(n,i)<<"\t";
}
int bino :: binomial(int n,int i)
{
 if(n==i || i==0)
    return 1;

 return(binomial(n-1,i-1)+binomial(n-1,i));
}

void main()
{
 clrscr();
  bino b;
  b.get();
 getch();
}
