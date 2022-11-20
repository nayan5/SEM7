#include<bits/stdc++.h>
using namespace std;
 
int F(int n)
{
 int t0=0,t1=1,i;
 int s;
 if(n<=1) return n;
 cout<<t0;
 cout<<"  "<<t1;
 for(i=2;i<n;i++)
 {
 s=t0+t1;
 cout<<s <<" ";
 t0=t1;
 t1=s;
 }
 
 return s;
}
// int F(int n)
// {
//     if(n==0)
//         return 0;
//     else if(n==1)
//         return 1;
//     else
//         return ((F(n-1)+F(n-2)));
 
// }
int main()
{
    int num;
 
    cout<<"Enter a number : ";
    cin>>num;
 
    cout<<F(num)<<endl;
}