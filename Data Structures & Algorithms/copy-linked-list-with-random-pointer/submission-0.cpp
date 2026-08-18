/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        unordered_map<Node*,Node*>index;
        Node* temp=head;
        while(temp!=nullptr){
            index[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr){
            Node* copy=index[temp];
            copy->next=index[temp->next];
            if(temp->random!=nullptr){
                copy->random=index[temp->random];
            }
            temp=temp->next;    
        }
        return index[head];
    }
};
