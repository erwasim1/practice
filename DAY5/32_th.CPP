// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    
    // set<int>hashSet;
    
    // for(int i=0;i<n;i++){
    //     hashSet.insert(a1[i]);
    // }
    
    // for(int i=0;i<m;i++){
    //     if(hashSet.count(a2[i])){
    //         return "Yes";
    //     }
    //     else{
    //     return "No";
    //     }
    // }
    unordered_map<int,int>m1;
    
    for(int i=0;i<n;i++) m1[a1[i]]++;
    
    int c=0;
    for(int i=0;i<m;i++){
        if(m1[a2[i]]){
            c++;
        }
    }
    
    if(c!=m)return "No";
    else return "Yes";
    
    
    
    
    
}