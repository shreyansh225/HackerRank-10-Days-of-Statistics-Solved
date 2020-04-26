#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i,j;
    float sum=0,sn=0;
    cin>>n;
    int x[n],w[n];
    for(i=0;i<n;i++) cin>>x[i];
    for(i=0;i<n;i++) cin>>w[i];
    for(i=0;i<n;i++)
    {   
        sn=sn+w[i];
        sum=x[i]*w[i]+sum;
    }
    printf("%.1f",sum/sn);
    return 0;
}

/*
Input (stdin)
  5
  10 40 30 50 20
  1 2 3 4 5
Output
  32.0
*/
