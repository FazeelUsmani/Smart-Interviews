#include <bits/stdc++.h>
using namespace std;
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;  
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, count = 0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        for(int i=0;i<n-1;i++)
            for(int j=0;j<n-i-1;j++){  
                int temp=0;
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    //swap(arr[j],arr[j+1]);
                    count++;       
                    }
                }
        
        //count1=count1/2;
        cout<<count<<endl;
    }
    return 0;
}
