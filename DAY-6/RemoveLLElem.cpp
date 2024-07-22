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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        
        // Create a dummy node pointing to head
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        // Initialize current pointer to dummy node
        ListNode* curr=dummy;
        while(curr->next!=NULL){
            if(curr->next->val==val){
                curr->next=curr->next->next;
            }else{
                curr=curr->next;
            }
        }
        // Return the new head, which is the next node of dummy
        return dummy->next;
    }
};