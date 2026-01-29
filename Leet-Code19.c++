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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy=new ListNode(0,head);
        int gap=0;
        ListNode *slow=dummy,*fast=dummy;
        while(fast->next!=NULL){
            if(gap<n){
                fast=fast->next;
                gap++;
            }
            else{
                slow=slow->next;
                fast=fast->next;
            }
        }
        slow->next=slow->next->next;
        ListNode *newhead=dummy->next;
        return newhead;
    }
};