#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int power(ll x, ll y, ll p){
    int res = 1;     
    x = x % p;  
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}
int main(){
    int t;
    cin>>t;   
    while(t--) {
        ll a,b;
        cin >> a >> b;
        cout << power(a,b,1000000007)<<"\n";
    }
    return 0;
}