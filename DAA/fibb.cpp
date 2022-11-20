#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int t1=0, t2=1;
    int next;
    int k=0;

    cout << t1 << " " << t2 << " ";
    while(k<x)
    {
        
       
            next = t1 + t2;

            cout << next << " ";
            t1 = t2;
            t2 = next;
            
            k++;
        
    }
}

//TC -
//SC -