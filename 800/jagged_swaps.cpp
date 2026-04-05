#include<bits/stdc++.h>
using namespace std;
int main()
{  
/*  #TC->O(N)==O(10)  --to store the array           
    #SC->O(N)=O(10)   --- array storing                      */
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            vector<int> a(n);
            for(int i=0;i<n;i++)
                cin>>a[i];

            if(a[0]==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    return 0;
}