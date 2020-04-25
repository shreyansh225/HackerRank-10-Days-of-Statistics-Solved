//---------------------------Python3 Code-----------------------------------------------------------
import numpy as np
from scipy import stats

size=int(input())
num=list(map(int,input().split()))
print(np.mean(num))
print(np.median(num))
print(int(stats.mode(num)[0]))
/*
Input (stdin)
    10
    64630 11735 14216 99233 14470 4978 73429 38120 51135 67060
Output
    43900.6
    44627.5
    4978
*/



/*
---------------------------C++ CODE --------------------------------------

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,count=0,max=0,itr,mode=0;
    cin>>n;

    //For finding MEAN-----------------------------------
    float a[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    printf("%.1f\n",sum/n);
    
    //For finding MEDIAN-----------------------------------------------
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
    
    //For finding MODE-------------------------------------------
    for(i=0;i<n;i++)
    {
    itr=a[i];
    for(j=0;j<n;j++)
        {
            if(itr==a[j])
                count++;
            if(count>max){
                max=count;
                if(max==1)
                    mode=a[n];
                else mode=itr;}
        }
    }
    printf("%d",mode);
    return 0;
}
*/
