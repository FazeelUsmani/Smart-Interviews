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
        int c1,r1,c2,r2;
        cin>>r1>>c1;
        int a[r1][c1];
        for(int i=0;i<r1;i++)
         for(int j=0;j<c1;j++)
            cin>>a[i][j];
        cin>>r2>>c2;
        int b[r2][c2];
        for(int i=0;i<r2;i++)
         for(int j=0;j<c2;j++)
            cin>>b[i][j];
        int c[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0; j<c2; j++){
                c[i][j]=0;
                for(int k=0; k<c1; k++)
                    c[i][j] = c[i][j]+(a[i][k]*b[k][j]);
            }
        } 
    
        
        for(int i=0;i<r1;i++){
         for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
         }
            cout<<"\n";
        }
        
        
    
    }
    
    return 0;
}