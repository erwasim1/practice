// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeboth(Node* first,Node* second){
        Node*ans=NULL;
        if(!first)return second;
       else if(!second)return first;
        
        if(first->data<=second->data){
            ans=first;
            ans->next=mergeboth(first->next,second);
        }
        else{
             ans=second;
            ans->next=mergeboth(first,second->next);
        }
        return ans;
    }
    Node* middle(Node*curr,Node**first,Node**second){
        Node*slow;
        Node*fast;
        slow=curr;
        fast=curr->next;
        
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        *first=curr;
        *second=slow->next;
        slow->next=NULL;
    }
    void mergesorting(Node**head){
        Node*curr=*head;
        Node*first;
        Node*second;
        
        if(!curr or !curr->next)return;
        middle(curr,&first,&second);
        mergesorting(&first);
        mergesorting(&second);
        *head=mergeboth(first,second);
        
    }
    
    Node* mergeSort(Node* head) {
        // your code here
        mergesorting(&head);
        return head;
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends