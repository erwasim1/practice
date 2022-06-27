// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
         int l[n],r[n];
     int ma,mi;
     ma=l[0]=arr[0];
     mi=r[n-1]=arr[n-1];
     for(int i=0;i<n;i++){
         if(arr[i]>ma)ma=arr[i];
         l[i]=ma;
     }
     for(int i=n-2;i>=0;i--){
         if(arr[i]>mi)mi=arr[i];
         r[i]=mi;
     }
     int s=0;
     for(int i=0;i<n;i++){
         s+=min(l[i],r[i])-arr[i];
     }
     return s;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends