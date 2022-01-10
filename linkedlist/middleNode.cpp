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
    
    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL){
            return head;
        }
        int countNodes = count(head);
        ListNode* temp = head;
        int i = 0;
        while(i < (countNodes/2)){
            //ListNode* newHead = temp;
            temp = temp->next;
            i++;
        }
        
        return temp;
    }
};