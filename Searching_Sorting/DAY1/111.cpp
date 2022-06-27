// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        // int n=arr.size();
        // sort(arr.begin(),arr.end());
        // set<vector<int>>sv;
        
        // for(int i=0;i<n;i++){
            
        //     for(int j=i+1;j<n;j++){
        //         for(int d=j+1;d<n;d++){
        //             int chk=k-(arr[i]+arr[j]+arr[d]);
                    
        //             if(binary_search(arr.begin()+d+1,arr.end(),chk)){
        //                 vector<int>v;
        //                 v.push_back(arr[i]);
        //                 v.push_back(arr[j]);
        //                 v.push_back(arr[d]);
        //                 v.push_back(chk);
                        
                        
        //                 sort(v.begin(),v.end());
        //                 sv.insert(v);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>>ans(sv.begin(),sv.end());
        // return ans;
        vector<vector<int>>res;
        int n=arr.size();
        if(arr.empty())
        return res;
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target_2=k-arr[j]-arr[i];
                
                int front=j+1;
                int back=n-1;
                
                while(front<back){
                    int two_sum=arr[front]+arr[back];
                    if(two_sum<target_2)front++;
                    else if(two_sum>target_2)back--;
                    else{
                        vector<int>ans(4,0);
                        ans[0]=arr[i];
                        ans[1]=arr[j];
                        ans[2]=arr[front];
                        ans[3]=arr[back];
                        
                        res.push_back(ans);
                        
                        while(front<back and arr[front]==ans[2])front++;
                        
                         while(front<back and arr[back]==ans[3])back--;
                    }
                }
                
                while(j+1<n and arr[j+1]==arr[j])j++;
                
                while(i+1<n and arr[i+1]==arr[i])i++;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends