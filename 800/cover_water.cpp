#include<bits/stdc++.h>
using namespace std;
 
int main(){           //TC->O(N)            SC->O(1)
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool flag_continous=false;     //flag for three continous dots
        int count_dots=0;
        for(int i=0;i<n;i++)            //trimmed for edge case
        {
            if(i==0 || i==n-1)
            {
                if(s[i]=='.')
                    count_dots++;
                continue;
            }
            
            if(s[i]=='.')
            {
                count_dots++;
                if(s[i-1]=='.' && s[i+1]=='.')
                {
                    flag_continous=true;
                    break;
                }
            }
        }
            

        if(flag_continous)
            cout<<"2"<<endl;
        else    
            cout<<count_dots<<endl;
    }

    return 0;
}