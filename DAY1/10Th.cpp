#include<algorithm>
/*
	Time complexity: O(N * logN)
	Space Complexity: O(1)
	
	Where N is the number of elements in the array.
*/
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    
    sort(nums.begin(),nums.end());
    return nums;
}
