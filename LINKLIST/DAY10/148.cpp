// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
        
  Node* ptr1=head1;
  Node*ptr2=head2;
  int c1,c2=0;
  
  while(ptr1){
      c1++;
      ptr1=ptr1->next;
      
  }
  while(ptr2){
      c2++;
      ptr2=ptr2->next;
  }
  ptr1=head1;
  ptr2=head2;
  
  int diff=abs(c1-c2);
  if(c1>c2){
      for(int i=0;i<diff;i++)
      ptr1=ptr1->next;
  }
  else if(c2>c1){
      for(int i=0;i<diff;i++)
      ptr2=ptr2->next;
  }
  
  while(ptr1!=ptr2){
      ptr1=ptr1->next;
      ptr2=ptr2->next;
  }
  
  if(ptr1)return head1;
  
  return NULL;
  
}