#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,sum=0;
    cin>>n;
    float x[n],var=0;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    float mean=sum/n;
    for(i=0;i<n;i++)
    {
        var+= pow((x[i]-mean),2);
    }
    printf("%.1f",pow(var/n,0.5));
    return 0;
}

/*
Input (stdin)
5
10 40 30 50 20
 Output (stdout)
14.1
*/
