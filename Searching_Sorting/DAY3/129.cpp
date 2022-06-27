// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    bool fact(int mid,int n){
       int prod=5,c=0;
       while(prod<=mid){
           c+=(mid/prod);
           prod=prod*5;
       }
       return c>=n;
    }
        int findNum(int n)
        {  
            if(n==0)return 5;
            
            int lo=0;
            int hi=n*5;
            
            while(lo<hi){
                int mid=lo+(hi-lo)/2;
                
                if(fact(mid,n)){
                    hi=mid;
                }
                else{
                    lo=mid+1;
                }
            }
            return lo;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends