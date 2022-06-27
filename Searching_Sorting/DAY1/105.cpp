class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int arr[3]={ A,B,C};
    sort(arr,arr+3);
    return arr[1];
    }
};