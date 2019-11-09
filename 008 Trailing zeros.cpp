#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long trailingZeros(long n) {
        long r = 0;
        while (n >= 5) {
            r += n / 5;
            n /= 5;
        }
        return r;
    }
/*int TrailingZeros(int n)
{
    double count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}
*/
int main()
{
    int t;
    long z,n;
    cin>>t;
    while(t--){
        cin>>n;
        z = trailingZeros(n);
        cout<<z<<"\n";
    }
    
    return 0;
}