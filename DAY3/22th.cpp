class Solution{   
public:
//time complexity=0(n2);
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k){
                    count++;
                }
            }
        }
        return count;
    }
};

 int ans=0;
        unordered_map<int,int> m;
       for(int i=0;i<n;i++)
       {
           int b=k-a[i];
           if(m[b])
           ans+=m[b];
           
           m[a[i]]++;
           
       }
       
       return ans;