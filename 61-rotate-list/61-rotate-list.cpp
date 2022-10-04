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
    ListNode* rotateRight(ListNode* head, int k) {
        //edge cases
        if(!head|| head->next==NULL || k==0) return head;
        
        //length of LL
        ListNode* cur=head;
        int length=1;
        while(cur->next && length++)
            cur=cur->next;
        
        //approach
        cur->next=head;
        k=k%length;
        k=length-k;
        while(k--) 
            cur=cur->next;
        
        //make node and break connection
        head=cur->next;
        cur->next=NULL;
        
        return head;
    }
};