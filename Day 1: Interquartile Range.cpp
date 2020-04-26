#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i,j,sum=0,u=0,t[1000];
    cin>>n;
    int x[n],f[n];
    for(i=1;i<n;i++) cin>>x[i];
    for(i=1;i<n;i++) 
        {cin>>f[i];
        sum+=f[i];}
    cout<<sum<<" \n";
    //int t[sum];
    for(i=0;i<n;i++)
    {
        for(j=0;j<f[i];j++)
        {
            t[u]=x[i];
            u++;
        }
    } 
    for(i=0;i<u;i++)
        cout<<t[i]<<" "; 
    return 0;
}
