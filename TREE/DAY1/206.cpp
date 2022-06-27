// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) 
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function template for C++

/*
struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
  public:
  const int MOD = 1e9+7;
unordered_map<int, int> M;
int count = 0;
void recur(Node* n, int k, int sum) {
    if (!n) return;
    sum += n->data;
    count = (count + M[sum - k]) % MOD;
    M[sum]++;
    recur(n->left, k, sum);
    recur(n->right, k, sum);
    M[sum]--;
}
//   void func(Node*root,vector<int> &path,int &c,int k){
//       if(!root)return;
//         path.push_back(root->data);
//       func(root->left,path,c,k);
//       func(root->right,path,c,k);
//       int f=0;
//       for(int j=path.size()-1;j>=0;j--){
//           f+=path[j];
//           if(f==k){
//               for(int m=j;m<path.size();m++){
//                   c++;
//               }
//           }
//       }
//       path.pop_back();
//   }
    int sumK(Node *root,int k)
    {
        // int c=0;
        // vector<int>path;
        // func(root,path,c,k);
        // return c;
         M[0] = 1;
    recur(root, k, 0);
    return count;
    }
};

// { Driver Code Starts.

int main() {
    string tc;
    getline(cin, tc);
    int t = stoi(tc);
  
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        string key;
        getline(cin, key);
        int k=stoi(key);
        Solution ob;
        cout << ob.sumK(root, k) << "\n";
    }
    return 0;
}  // } Driver Code Ends