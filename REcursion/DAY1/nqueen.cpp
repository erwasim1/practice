// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
void solve(int col,vector<int>&board,vector<vector<int>>&ans,vector<int>&leftrow,vector<int>&lowerdiagonal,vector<int>&upperdiagonal,int n){

if(col==n){
    ans.push_back(board);
    return;
}
for(int row=0;row<n;row++){
    if(leftrow[row]==0 and lowerdiagonal[row+col]==0 and upperdiagonal[n-1+col-row]==0){
        //board[row][col]=1;
        board.push_back(row+1);
        leftrow[row]=1;
        lowerdiagonal[row+col]=1;
        upperdiagonal[n-1 + row-col]=1;
        solve(col+1,board,ans,leftrow,lowerdiagonal,upperdiagonal,n);
        board.pop_back();
       //board[row][col]=0;
       // leftrow[row]=1;
        lowerdiagonal[row+col]=0;
        upperdiagonal[n-1 + row-col]=0;
    }
}


    
}
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>>ans;
        vector<int>board(n);
       // board s(n,'')
        for(int i=0;i<n;i++){
            board[i]=0;
        }
        
        vector<int>leftrow(n,0),upperdiagonal(2*n-1),lowerdiagonal(2*n-1);
        solve(0,board,ans,leftrow,lowerdiagonal,upperdiagonal,n);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends