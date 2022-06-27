// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        int h[26];
        
        for(int i=0;i<26;i++){
            h[i]=0;
        }
        for(int i=0;i<s.size();i++){
            
            h[s[i]-97]++;
        }
        
        priority_queue<int>q;
        int ans=0;
        for(int i=0;i<26;i++){
            if(h[i]!=0)
            q.push(h[i]);
        }
        
        while(k){
            int top=q.top();
            q.pop();
            top--;
            k--;
            q.push(top);
        }
        while(q.size()){
            ans+=(q.top()*q.top());
            q.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends