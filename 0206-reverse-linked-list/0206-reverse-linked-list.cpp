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
    
    ListNode* reverse1(ListNode* head){
         
       
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* newHead = reverse1(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return newHead;
        
    }
    
    void reverse(ListNode* &head , ListNode* curr, ListNode* prev){
        
        if(curr == NULL){
            head = prev;
            return;
        }
        
        reverse(head, curr->next,curr);
    
        curr->next = prev;
        
        
    }
    
    
    ListNode* reverseList(ListNode* head) {
        
       /* ListNode* curr = head;
        ListNode* prev = NULL;
        
        reverse(head, curr, prev);
        return head;
        */
        
        ListNode* temp = reverse1(head);
        
        return temp;
        
        
        
        
        
       /* ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        
        
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;*/
        
    }
};