#include<iostream>
using namespace std;

int fib(int i)
{
    if((i==1) || (i==0))
    {
        return(i);
    }
    else{
        return(fib(i-1)+fib(i-2));
    }
}


int main()
{
    //fib
    int x;
    cin >> x;

    int k=0;

    while(k<x)
    {
        cout<<" "<<fib(k);
        k++;
    }

}

// TC -
// SC - 