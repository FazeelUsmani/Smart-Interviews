#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,i;
        cin>>n;
        long long int ar[n];
        for(i=0;i<n;i++)
            cin>>ar[i];
        sort(ar, ar+n);
        for(i=0;i<n;i++){
            if(ar[i]!=ar[i+1]||ar[i+1]!=ar[i+2])
            {
                cout<<ar[i]<<endl;
                break;
            }
            i=i+2;
            
        }   
        
    }
    
    return 0;
}