#include<bits/stdc++.h>
using namespace std;
//#TC->O(n log n)               # SC->O(n + n)== O(n)
int main(){                 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        map<long,long> mpp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mpp[a[i]]++;
        }    
        if(mpp.size()>2)    //more than 2 DISTINCT INTEGERS
            cout<<"NO"<<endl;
        else if(mpp.size()==1)          //ALL elements same
            cout<<"YES"<<endl; 
        else     
        {
            long long freq1=mpp.begin()->second;
            long long freq2=mpp.rbegin()->second;
            if((n%2==0 && freq1==freq2)||(n%2==1 && abs(freq1-freq2)==1))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}