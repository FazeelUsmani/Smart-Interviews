#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int toh(int n, char src, char dest, char temp){ 
    if(n==0);
    else{
        
        toh(n-1,src,temp,dest);
        cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<"\n"; 
        toh(n-1,temp,dest,src);
    }
    return 0;
}

int main() {
    int t;
    char src = 'A', temp ='C', dest = 'B';
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<pow(2,n)-1<<"\n";
        toh(n,src,temp,dest);  
    }
    return 0;
}