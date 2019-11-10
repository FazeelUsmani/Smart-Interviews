#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool checkbit(int N, int i);
void binaryconv(int n)
{
    if(n>1)
       binaryconv(n/2);
    cout<<n%2;
}
int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
     cin>>n;
     binaryconv(n);
        cout<<"\n";
    }  
    return 0;
}