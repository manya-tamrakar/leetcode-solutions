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
         if(head==NULL || head->next == NULL){
            return head;
        }
        int length = 0;
        ListNode* curr = head;
        while(curr != NULL){
            length++;
            curr = curr -> next;
        }
        
        k = k % length;
         if(k == 0) {
            return head;
        }
       
        int steps = length -k;
        curr = head;
        for(int i =1;i<steps;i++){
            curr = curr->next;
        }
        ListNode* newHead = curr->next;
        curr->next = NULL;
        ListNode* tail = newHead;
        while(tail->next != NULL){
            tail = tail->next;
        }
        tail->next = head;
     return newHead;

    }
};