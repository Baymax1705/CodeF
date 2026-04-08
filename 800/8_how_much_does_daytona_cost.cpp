#include<bits/stdc++.h>
using namespace std;

int main(){                     //#TC->O(n)             SC->O(n)
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        bool exist=false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==k)
                exist=true;
        }
        if(exist)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}