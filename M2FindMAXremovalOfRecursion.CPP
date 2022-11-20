#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int arr[100] ,size ,max ;
class Max1
{
  int i,j;
 public:
  void get();
  void disp();
  int Max(int);
};
void Max1 :: get()
{
 cout<<"Enter arr size : ";
 cin>>size;
 for(int p=1;p<=size;p++)
 {
  if(p%9==0) cout<<endl;
  arr[p]=rand();
  cout<<arr[p]<<"\t";
 }
}
void Max1 :: disp()
{
 cout<<"\nMax ele position : "<<max;
 cout<<"\nMax ele value    : "<<arr[max];
}
int Max1 :: Max(int i)
{
 int add, top=1, stk[200];
 l1:
  if(i<size)
  {
   stk[top++]=i;
   stk[top]=2;
   i++;
   goto l1;
   l2:
    j=stk[top--];
    if(arr[i]>arr[j])
      max=i;
    else
      max=j;
  }
  else
    max=size;
  if(top==0)
    return max;
  add = stk[top--];
  i=stk[top--];
  stk[++top]=max;
  if(add == 2)
    goto l2;
}

void main()
{
 clrscr();
 Max1 m1;
 m1.get();
 m1.Max(1);
 m1.disp();
 getch();
}
