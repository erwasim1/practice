//0(n
//0(n))
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int val=size/2;
           
    unordered_map<int,int>M;
    
     for (int i=0;i<size;i++)
        M[a[i]]++;
    
    for(auto it:M){
        if(it.second>val)
        return it.first;
        
    }
    return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends

  /0(n) and o(1)

  // { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
    //     int val=size/2;
           
    // unordered_map<int,int>M;
    
    //  for (int i=0;i<size;i++)
    //     M[a[i]]++;
    
    // for(auto it:M){
    //     if(it.second>val)
    //     return it.first;
        
    // }
    // return -1;
    
    int ma=a[0];
    int count=1;
    for(int i=1;i<size;i++){
    if(a[i]==ma)
    count++;
   else count--;
   
   if(count==0){
       ma=a[i];
       count=1;
   }
    }
       int c=0;
       for(int i=0;i<size;i++){
           if(a[i]==ma){
               c++;
           }
       }
       if(c>size/2)
       return ma;
       else return -1;
    }
    };

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends