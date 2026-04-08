#include<bits/stdc++.h>
using namespace std;

int main(){                 //TC->O(n)=O(100)        SC->O(n)=O(100)
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n-1);
        long long sum_efficiency=0;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
            sum_efficiency+=a[i];
        }
        cout<<(-sum_efficiency)<<endl;
    }
}