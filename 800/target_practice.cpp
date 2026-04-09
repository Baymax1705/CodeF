#include<bits/stdc++.h>
using namespace std;
                                    //##SC->O(10*10)=O(100)            ##TC->O(n^2)=O(100)
const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string> board(10);
        for(int i=0;i<10;i++)
            cin>>board[i];
        
        int total_score=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(board[i][j]=='X'){
                    total_score+=score[i][j];
                }
            }
        }
        cout<<total_score<<endl;
    }
}