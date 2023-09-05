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
    
    ListNode* getMid(ListNode* head){

    ListNode* slow = head;
    ListNode* fast = head->next;
     
        while(fast!=NULL && fast->next !=NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        
    return slow;
    }
    
    
    ListNode* reverse(ListNode* temp){
        
        ListNode* prev = NULL;
        ListNode* curr = temp;
        ListNode* forward = NULL;
        
        while(curr!=NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            
        }
        return prev;
        
    }
    
    void print(ListNode* head){
        ListNode* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
    bool isPalindrome(ListNode* head) {
        
        
        ListNode* middle = getMid(head);  
         ListNode* temp = middle->next;
         middle->next = reverse(temp);
        
        print(head);
        
        ListNode* left = head;
        ListNode* right = middle->next;
        
        while(right!=NULL){
            
            if(left->val != right->val)return 0;
            
            left = left->next;
            right = right->next;
            
        }
        
        
        return 1;
        
    
    }
};