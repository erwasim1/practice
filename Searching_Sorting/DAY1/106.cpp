// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
     
        // sort(arr,arr+n);
        // int ans=0;
        // for(int i=0;i<=n;i++)
        // {
        //     if(arr[i]==arr[i+1]){
        //       ans=arr[i];
        //       ans1[0]=ans;
        //       break;
        //     }
        //     ans1[1]=ans-1;
        // }
        
        
        // // ans1[0]=ans;
        // // ans1[1]=missing;
        
        // return ans1;
        // 
        
        int m,r;
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]<0){
                r=abs(arr[i]);
            }
            else{
                arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                m=i+1;
                break;
            }
        }
        
        int *ans=new int[2];
        ans[0]=r;
        ans[1]=m;
        
        
        
        return ans;
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends