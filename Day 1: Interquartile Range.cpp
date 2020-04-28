#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i,j,sum=0;
    cin>>n;
    float x[n],f[n],t[1000],q1,q3;
    for(i=0;i<n;i++) cin>>x[i];
    for(i=0;i<n;i++) cin>>f[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<f[i];j++)
        {
            t[sum]=x[i];
            sum++;
        }
    }
    //int z = sizeof(t)/sizeof(t[0]); 
    sort(t, t+sum);
    //cout<<sum<<" \n";
    if(sum%2==1)  // for all odd numbers ------------------
    {
        if((sum/2)%2==0)       // for odd numbers like 17,21,25,45  having first division of sum by 2 as an even no.
        {
            q1=(t[sum/4-1]+t[sum/4])/2;
            q3=(t[sum/2+sum/4]+t[sum/2+sum/4+1])/2;
        }
        else                   // for odd numbers like 15,19,23,47  having first division of sum by 2 as an odd no.
        {
            q1=t[sum/4];
            q3=t[sum/2+sum/4+1];
        }
    }
    else
    { 
        if((sum/2)%2==0) // for even numbers like 6,10,14,18  having first division by 2 as an odd no.
        {
        q1=(t[sum/4]+t[sum/4-1])/2;
        q3=(t[sum/4+sum/2]+t[sum/2+sum/4-1])/2;
        }
        else  // for even numbers like 8,12,16,20  having first division by 2 as an even no.
        {
        q1=t[sum/4];
        q3=t[sum/2+sum/4];
        }
    }
    //for(i=0;i<sum;i++) cout<<t[i]<<" ";
    cout<<fixed<<setprecision(1)<<(q3-q1);
    return 0;
}
