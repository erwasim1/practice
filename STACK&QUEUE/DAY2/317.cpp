 // { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
    //   stack<int>st;
    //   int j=0;
      
    //   for(int i=0;i<N;i++){
    //       st.push(A[i]);
          
    //       while(!st.empty() and st.top()==B[j]  and j<N){
    //           st.pop();
    //           j++;
    //       }
    //   }
    //   if(st.empty()){
    //       return 1;
    //   }
    //   return 0;
    stack<int>s;
    int i=0,j=0;
    while(i<N and j<N){
        if(s.size()==0){
            s.push(A[i]);
            i++;
        }
        else if(s.size()>0 and s.top()!=B[j]){
            s.push(A[i]);
            i++;
        }
        else if(s.size()>0 and s.top()==B[j]){
            s.pop();
            j++;
        }
        
        
    }
    while(!s.empty()and s.top()==B[j]){
        s.pop();
        j++;
    }
     if(s.empty()){
           return 1;
       }
       else{
           return 0;
       }
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends