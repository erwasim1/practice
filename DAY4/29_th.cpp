// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
    //   sort(arr,arr+N);
    //   int ans=1;
    //   int prev=arr[0];
    //   int cur=1;
      
    //   for(int i=1;i<N;i++){
    //       if(arr[i]==prev+1){
    //           cur++;
    //       }
    //       else if(arr[i]!=prev){
    //           cur=1;
    //       }
          
    //       prev=arr[i];
    //       ans=max(ans,cur);
    //   }
      
    //   return ans;
    
    set<int>hashSet;
    
    for(int i=0;i<N;i++){
        hashSet.insert(arr[i]);
    }
    
    int longstreak=0;
    for(int i=0;i<N;i++){
        if(!hashSet.count(i-1)){
            int currentnum=arr[i];
            int currentStreak=1;
        
        
        while(hashSet.count(currentnum+1)){
            currentnum+=1;
            currentStreak+=1;
        }
        
        longstreak=max(longstreak,currentStreak);
        
        }
    }
    
    return longstreak;
      
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends