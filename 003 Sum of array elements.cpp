#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //int t,i;
    long int n,t,i;
    cin>>t;
    while(t--)
    {
     cin>>n;
        long int sum = 0, a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
     cout<<sum<<"\n";
    }
    
    return 0;
}

