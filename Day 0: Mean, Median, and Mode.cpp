#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,count=0;
    cin>>n;
    float a[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    printf("%.1f\n",sum/n);
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                    swap(a[j],a[i]);
            }
        }
    if(n%2==1)
        printf("%.1f\n",a[n/2+1]);   
    else
        {
            printf("%.1f\n",(a[n/2-1]+a[n/2])/2);
        }
    for(i=0;i<n;i++)
    {
    bool exists = std::find(std::begin(a), std::end(a), a[i]) != std::end(a);
    count++;
    }
    return 0;
}
