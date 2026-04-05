#include<bits/stdc++.h>
using namespace std;

int main(){                     //TC->O(1)   SC->O(1)
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0)                      //Vova
            cout<<"Second"<<endl;
        else                        //vanya
            cout<<"First"<<endl;
    }

    return 0;
}