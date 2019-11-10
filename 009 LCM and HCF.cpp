
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
    long long int a,b,t,x,y,gcd,lcm;
    cin>>x>>y;
    a=x;
    b=y;
    while(b!=0){
     t=b;
     b=a%b;
     a=t; 
    }
    gcd=a;
    lcm=(x*y)/gcd;
    cout<<lcm<<" "<<gcd<<"\n";
    }
    return 0;
}
