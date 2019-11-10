#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool overlap(long long x1,long long y1,long long x2,long long y2,long long a1,long long b1,long long a2,long long b2);
long long area(long long x1, long long y1, long long x2, long long y2){
    long long d1,d2;
    d1 = x2-x1;
    if(d1<0)
        d1*=-1;
    d2 = y2-y1;
    if(d2<0)
        d1*=-1;
    //d1=abs(x2-x1);//cout<<d1<<endl;
    //d2=abs(y2-y1);//cout<<d2<<endl;
    return d1*d2;    
}
bool overlap(long long x1,long long y1,long long x2,long long y2,long long a1,long long b1,long long a2,long long b2){
     if(x1>a2 || a1>x2 ||  y1>b2 || b1>y2)
        return false;
    return true;
}
int main() {
    long long t,r1,r2,flag=0;
    cin>>t;
    long long x1,y1,x2,y2,a1,b1,a2,b2;
    while(t--){
        cin>>x1>>y1>>x2>>y2>>a1>>b1>>a2>>b2;
        r1 = area(x1,y1,x2,y2);
        r2 = area(a1,b1,a2,b2);
        int ov = overlap(x1,y1,x2,y2,a1,b1,a2,b2);
        long r3=0;
        //cout<<ov<<"\n";
        if(ov)
            r3 = (min(x2,a2)-max(x1,a1))*(min(y2,b2)-max(y1,b1));
        cout<<r1+r2-r3<<"\n";
    }
    return 0;
}