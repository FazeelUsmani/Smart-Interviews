#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t,test_case,n,i=0,j;
    cin>>test_case;
    while(test_case--){
    cin>>n; 
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    i=0;    
    while(n!=0){
        
    t=i;//cout<<"t ="<<t<<" ";
    for(j=i;j<n;j++)
        cout<<a[i][j]<<" ";
    j=n-1;
        
    for(i=i+1;i<n;i++)
        cout<<a[i][j]<<" ";
    i=n-1;
        
    for(j=n-2;j>=t;j--)
        cout<<a[i][j]<<" ";
    j=t;//cout<<"t= "<<t<<"\n\n\n";
    
        for(i=n-2;i>=j+1;i--)
        cout<<a[i][j]<<" ";        
    i++;j++;n--; 
    }
        cout<<endl;
    }
    
    return 0;
}