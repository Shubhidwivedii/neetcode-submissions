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
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        if(count==1 && n==1) return nullptr;
        int x=count-n;
        if(x==0){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        temp=head;
        while(x>1){
            x--;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
