#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t,count,res,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        res = a^b;
        count = __builtin_popcount(res);
        cout<<count<<"\n";
    }
    
    return 0;
}