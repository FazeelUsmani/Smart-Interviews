#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x=0,temp=0,a,b;
        cin>>n;
        int ar[n], cnt[n];
        for(int k=0;k<n;k++)
            cnt[k] = 1;
        
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int j=0;j<n;j++){
            cnt[ar[j]]+=1;
        }

        for(int i=0;i<n;i++){
            if(cnt[i]==3){
                a=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(cnt[j]==3){
                b=j;
                break;
            }
        }
        if(a>b)
            cout<<b<<" "<<a;
        else
            cout<<a<<" "<<b;
        cout<<endl;
                
    }
    return 0;
}
