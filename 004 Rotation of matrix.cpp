#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void rot(int ar[][100], int r, int c)
{
  
    for(int k=0;k<r;k++)
        {
            for(int i=r-1; i>=0; i--)
            {  
            cout<<ar[i][k]<<" ";
            }
       
        cout<<"\n";
        }
}


int main() {
    int t,n, x=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x++;
        int ar[100][100];
        for(int i=0;i<n;i++)
            for(int j=0; j<n;j++)
                cin>>ar[i][j]; 
         cout<<"Test Case #"<<x<<":"<<"\n";
         rot(ar,n,n);        
    }
    
    
    return 0;
}