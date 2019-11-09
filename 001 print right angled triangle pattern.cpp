#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int r, i,j,t,x=1;
    cin>>t;
    while(t--)
    {
        cin>>r;
        cout<<"Case #"<<x++<<":"<<"\n";
	    for(i=1;i<=r;i++)
	    {
            
		 for(j=0;j<r-i;j++)
		   cout<<" ";
		 for(j=0;j<i;j++)
		   cout<<"*";
		 cout<<"\n";
	     }
     }
  return 0;
}