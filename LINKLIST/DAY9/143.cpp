/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow=head;
        ListNode *fast=head;
        bool cycle=false;
        
        while( fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow == fast){
                 cycle=true;

                break;
            }
        }
        
        if(!cycle){
            return NULL;
        }
        
       
            slow=head;
            
            while(slow!= fast){
                slow=slow->next;
                fast=fast->next;
            }
           
            
           
            
        
         return slow;
    }
};