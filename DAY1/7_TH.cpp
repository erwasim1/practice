#include <queue>
#include<algorithm>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    vector<int> result(2);

    // Build Min-Heap from the given array.
    priority_queue<int, vector<int>, greater<int>> minHeap(arr.begin(), arr.end());

    // Pop from Min-Heap exactly K-1 times
    for(int i = 1; i < k; i++) 
    {
        minHeap.pop();
    }

    // Kth smallest element.
    result[0] = minHeap.top();

    // Build Max-Heap from the given array.
    priority_queue<int> maxHeap(arr.begin(), arr.end());

    // Pop from Max-Heap exactly K-1 times
    for(int i = 1; i < k; i++) 
    {
        maxHeap.pop();
    }

    //Kth largest element.
    result[1] = maxHeap.top();

    return result;
//     sort(arr.begin(),arr.end());
//     int small=arr[k-1];
//     int large=arr[n-k];
//     ans.push_back(small);
//     ans.push_back(large);
//     return ans;
    
    
    
    
    
    
    
}