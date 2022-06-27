// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[],int s,int mid, int e){
        long long inv=0;
        int len1=mid-s+1;
        int len2=e-mid;
        
        int first[len1];
        int second[len2];
        
        int mainindex=s;
        for(int i=0;i<len1;i++){
            first[i]=arr[mainindex++];
        }
        for(int i=0;i<len2;i++){
            second[i]=arr[mainindex++];
        }
        
        int i=0,j=0,k=s;
        
        while(i<len1 && j<len2){
            if(first[i] <= second[j]){
                arr[k++]=first[i++];
            }
            else{
                arr[k++]=second[j++];
                inv+=len1-i;
            }
        }
        while(i<len1){
            arr[k++]=first[i++];
        }
        while(j<len2){
               arr[k]=second[j];
            inv += len1-i;
            k++;
            j++;
        }
        
        return inv;
    }
    
    long long mergesort(long long arr[],int s,int e){
        long long inv=0;
        
        if(s<e){
            int mid=s+e/2;
            inv+=mergesort(arr,s,mid);
            inv+=mergesort(arr,mid+1,e);
            inv+=merge(arr,s,mid,e);
        }
        
        return inv;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergesort(arr,0,N-1);
        
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends