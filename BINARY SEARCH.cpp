// FIND RANDOM VALUE IN ARR USING BINARY SEARCH

#include<iostream>
#include<stdlib.h>
using namespace std;

int arr[1001],n,s;
class Binary
{
 public:
    void get();
    void sort();
    void disp();
    void search(int ,int);
};
void Binary::get()
{
    cout<<"Enter size : ";
    cin>>n; cout<<n;
    for(int i=1;i<=n;i++)
    //cin>>arr[i];    
    {
        arr[i]= 1 +  rand() % 100 ;
        cin>>arr[i];
    }
}
void Binary::disp()
{
 cout<<"arr : ";
 for(int i=1;i<=n;i++)
    cout<<arr[i]<<" ";
cout<<endl;   
}
void Binary::sort()
{
 for(int i=1;i<=n;i++)
 {
     for(int j=i;j<=n;j++)
     {
         if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
     }
 }   
}
void Binary::search(int l=1,int r=n)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==s)
         {  
            cout<<"\n\nFound index : "<<m;
            exit(0);
         }
        else 
        {
            if(arr[m]<s)
                search(m+1,r);
            else
                search(l,m-1); 
        }
    }
    cout<<"\nElement not found";
    exit(0);
}
int main()
{
     Binary b;
     b.get();
     cout<<"\nGiven  ";
     b.disp();
     b.sort();
     cout<<"\nSorted ";
     b.disp();
     cout<<"\nEnter ele : ";
     //cin>>s;
     s=  1 + rand() % 100 ;
     cout<<s;
     b.search();  
 return 0;
}
