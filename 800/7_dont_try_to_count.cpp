#include<bits/stdc++.h>
using namespace std;
//##TC->O(2^5*(n*m))==>O(32*n*m)            
//SC->O(2^5* n)==>O(32*n)
bool checker(string s,string x)                //O((n-m+1)*m)=>O(nm-mm+m)==>O(n*m)
{
    if(x.size()<s.size())
        return false;
    
    for(int i=0;i<(x.size()-s.size()+1); i++)       //O(n-m+1)
    {
        if(x.substr(i,s.size())==s)     //O(m)
            return true;
    }
    return false;
}

int main(){                             //O(2^5*checker)      as 5 operation in exponentially
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;

        string x0=x;
        string x1=x0+x0;
        string x2=x1+x1;
        string x3=x2+x2;
        string x4=x3+x3;
        string x5=x4+x4;

        int ans=-1;
        if(checker(s,x0))
            ans=0;
        else if(checker(s,x1))
            ans=1;
        else if(checker(s,x2))
            ans=2;
        else if(checker(s,x3))
            ans=3;
        else if(checker(s,x4))
            ans=4;
        else if(checker(s,x5))
            ans=5;

        cout<<ans<<endl;
    }
    return 0;
}