#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void power1(long long int n)
{
  int res = __builtin_popcountll(n);
  if (res==1)
      cout<<"True\n";
  else
      cout<<"False\n";  
}
int main() {
    int t; 
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        power1(n);
    }
    return 0;
}
