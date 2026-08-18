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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr &&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=slow->next;
        slow->next = nullptr;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* curr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
        }
        temp=head;
        while(prev!=nullptr){
            ListNode* firstNext = temp->next;
            ListNode* secondNext = prev->next;
            temp->next=prev;
            prev->next=firstNext;
            temp=firstNext;
            prev=secondNext;
        }

        
    }
};
