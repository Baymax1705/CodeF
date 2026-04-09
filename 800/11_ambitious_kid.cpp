#include<bits/stdc++.h>
using namespace std;

int main(){                     //TC->O(N+N)=O(N)          SC->O(n)
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    int min_operations=INT_MAX;
    for(int i=0;i<n;i++)
        min_operations=min(min_operations,abs(a[i]));

    cout<<min_operations<<endl;
}



/*
Calculating nearesr to zero (positive, negative)  and with the assumption, all +ve or all -ve, or MIXED!!

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    bool flag_zero=false,flag_positive=false,flag_negative=false;
    int min_positive=INT_MAX;   int max_negative=INT_MIN;

    for(int i=0;i<n;i++){
        if(a[i]==0)
        {
            flag_zero=true;
            break;
        }
        else if(a[i]>0)
        {
            min_positive=min(min_positive,a[i]);
            flag_positive=true;
        }
        else
        {
            max_negative=max(max_negative,a[i]);
            flag_negative=true;
        }
    }

    if(flag_zero)
        cout<<"0"<<endl;
    else if(flag_positive & flag_negative)  
        cout<<min(abs(max_negative),min_positive)<<endl;
    else if(flag_positive)
        cout<<min_positive<<endl;
    else
        cout<<(-1*max_negative)<<endl;
}
//TC->O(n+n)=O(n)          SC->O(n)
*/