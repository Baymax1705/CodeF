#include<bits/stdc++.h>
using namespace std;
int main(){                         /*TC->O(n+n)==O(n) */         /* SC->O(n)   */
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>points;
        points.push_back(0);
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            points.push_back(temp);
        }
        points.push_back(x);

        int fuelCap=1;
        n=points.size();                //n+2
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                fuelCap=max(fuelCap,2*(points[i]-points[i-1]));
            }
            else
                fuelCap=max(fuelCap,points[i]-points[i-1]);
        }
        cout<<fuelCap<<endl;
        // cout<<"----------"<<endl;
    }

    return 0;
}