#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int xor1(int n)
{
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    int x1=a[0], x2=1;
    for(i=1;i<n;i++)
        x1 = x1^a[i];
    for(i=2;i<=n+1;i++)
        x2 = x2^i;
    return x1^x2;
}
int main() {
    int t,n,res;
    cin>>t;
    while(t--)
    {
        cin>>n;
        res = xor1(n);
        cout<<res<<"\n";    
    }
    
    return 0;
}