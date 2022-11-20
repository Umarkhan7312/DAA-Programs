#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

class array
{
  int *arr,n,*stk,top,p,i,j,item;
 public:
  array()
  {
    cout<<"Enter size : ";
     cin>>n;          // enter size
    arr=new int[n];  // arr  of size n
    stk=new int[n*2];// stack of size 2n
    top=-1; 	  // initally stack is empty
  }
  void get();
  void disp();
  int search(int);
};

void array::get()
{
 for(i=0;i<n;i++)
 {
  if(i%8==0)
  cout<<endl;
  arr[i]=random(100); // 1 to 100
  cout<<arr[i]<<" ";
 }
 cout<<"\nEnter inital pos : ";
 cin>>p;
 cout<<"\nEnter item to search : ";
 cin>>item;
}

void array:: disp()
{
 if(search(p-1) == -1)
   cout<<"\nItem not found..\n";
}

int array::search(int b)
{
 int addr,pos;
 while(b<n)
 {
  stk[++top]=b; // top=-1 empty to top=0 then with value s;
  stk[++top]=2; // top=0 with values 2 ;
  b++;          // increment s value by 1; now s=s+1;
 }
 pos = -1 ; // empty
 do
 {
  addr= stk[top--]; //addr now equals to top   value of stack
  j   = stk[top--]; // i value equals to top-1 value
  if(addr == 2 && arr[j] == item)
  {
   if(pos == -1) // intial value of pos
    cout<<"\nPosition found : ";
    pos = j+1;
    cout<<pos;
  }
 }while(top>0);
 return pos;
}

void main()
{
 clrscr();
  clock_t e,s;
  array a1;
   a1.get();
    s = clock();
   a1.disp(); // search is called inside disp with if condition
    e = clock();
  cout<<"\nTime Complexity : "<<((e-s)/CLK_TCK);
 getch();
}