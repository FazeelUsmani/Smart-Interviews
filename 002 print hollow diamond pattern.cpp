#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,r,k,i,j,x=1,temp = 1;
    cin>>t;
    while(t--)
    {
        cin>>r;
        cout<<"Case #"<<x++<<":"<<"\n";
        for(i=1; i<=r/2+1;i++)
        {
            if( i==1)
            {
                for(j=1;j<=r/2;j++)
                  cout<<" ";
                cout<<"*\n";             
            }
            else
            {
                
                for(j=1;j<=((r/2)-i+1);j++)
                    cout<<" ";
                cout<<"*";
                for(k=1;k<=temp;k++)
                    cout<<" ";
                temp+=2;
                cout<<"*\n";
            }
         }
        
        temp-=2;
        for(i=1; i<=r/2;i++)
        {
           
            if( i==r/2)
            {
                for(j=1;j<=r/2;j++)
                  cout<<" ";
                cout<<"*\n";             
            }
            else
            {
                
                for(j=r/2;j<=r/2+i-1;j++)
                    cout<<" ";
                cout<<"*";
                temp-=2;
                for(k=temp;k>=1;k--)
                    cout<<" ";
                //temp-=2;
                cout<<"*\n";
            }
         }
        
            
   
            
    }       
    return 0;
}
