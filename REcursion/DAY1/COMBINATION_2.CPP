// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void findcombination(int ind,int B, vector<int>&A, vector<vector<int>>&ans,vector<int>&ds){
        if(B==0){
            ans.push_back(ds);
            return;
        }
        if(B<0 || ind == A.size())
        return;
        
        for (int i=ind;i<A.size();i++){
            if(i>ind and A[i]==A[i-1])continue;
            
            if(A[i]>B)break;
            ds.push_back(A[i]);
            findcombination(i,B-A[i],A,ans,ds);
            ds.pop_back();
        }
        
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(),A.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findcombination(0,B,A,ans,ds);
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
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends