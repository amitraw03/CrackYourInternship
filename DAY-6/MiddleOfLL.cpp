/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //LL is empty or contain only 1 node
        if(head==NULL || head->next==NULL){
            return head;
        }

        //LL contain 2 nodes
        if(head->next->next==NULL){
            return head->next;
        }

        //slow & fast pointer approach
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL){
               fast=fast->next; 
            }
        }
        return slow;
      
    }
};