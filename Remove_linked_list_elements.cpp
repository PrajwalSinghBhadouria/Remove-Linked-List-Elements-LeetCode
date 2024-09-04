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
        ListNode* temp = head;
        ListNode* head1 = NULL;
        ListNode* tail = NULL;
        while(temp!=NULL){
            ListNode *node = new ListNode(temp->val);
            if(node->val != val){
                if(head1 == NULL){
                    head1 = node;
                    tail = head1;
                }
                else{
                    tail->next = node;
                    tail = node;
                }
            }
            temp=temp->next;
        }
        return head1;
        
    }
};
