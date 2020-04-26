#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,lmid,median,umid;
    cin>>n;
    int a[n];
    //float a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    int z = sizeof(a)/sizeof(a[0]); 
    sort(a, a+n);

    //for(i=0;i<n;i++)
        //cout<<a[i]<<" ";

    if(n%2==1)  // for all odd numbers ------------------
    {
        lmid=(a[n/4-1]+a[n/4])/2;
        median=a[n/2];
        umid=(a[n/2+n/4]+a[n/2+n/4+1])/2;
    }
    else
    { 
        if((n/2)%2==0) // for even numbers like 6,10,14,18  having first division by 2 as an odd no.
        {
        lmid=(a[n/4]+a[n/4-1])/2;
        median=(a[n/2]+a[n/2-1])/2;
        umid=(a[n/2+n/4-1]+a[n/2+n/4])/2;
        }
        else  // for even numbers like 8,12,16,20  having first division by 2 as an even no.
        {
        lmid=a[n/4];
        median=(a[n/2]+a[n/2-1])/2;
        umid=a[n/2+n/4];
        }
    }
    printf("%d\n%d\n%d",lmid,median,umid);
    return 0;
}

/*
Input (stdin)
  9
  3 7 8 5 12 14 21 13 18
Expected Output
  6
  12
  16

Input (stdin)
  10
  3 7 8 5 12 14 21 15 18 14
Output
  7
  13
  15
  
Input (stdin)
  12
  4 17 7 14 18 12 3 16 10 4 4 12
Output
  4
  11
  15
*/
