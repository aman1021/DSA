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
    int count(ListNode* head){
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return head;
        }
        
        int totalNodes = count(head);
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        // if(totalNodes == n && n==1){
        //     return prev;
        // }
        if(totalNodes == n){
            return head->next;
        }
        int i = 0;
        while(i < (totalNodes - n)){
            prev = temp;
            temp = temp->next;
            i++;
        }
        
        prev->next = temp->next;
        
        return head;
    }
};