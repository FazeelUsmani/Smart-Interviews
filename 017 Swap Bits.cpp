#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

uint32_t swapBits(uint32_t n) {
        n = ((n >> 1)&0x55555555)  | ((n << 1)& 0xaaaaaaaa) ;
        return n;
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        uint32_t n;
        cin>>n;
        cout<<swapBits(n)<<endl;    
    }
    return 0;
}