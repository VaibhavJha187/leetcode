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
    
    
    int getLength(ListNode*head){
        
        int count = 0;
        while(head!=NULL){
            head = head->next;
            count++;
        }
        
        return count;
    }
    
    ListNode* getMiddleElement(ListNode* &head){
        
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        // if(head->next->next == NULL){
        //     return head->next;
        // }
        
        while(fast!= NULL){    
            
            fast = fast->next;
            if(fast !=NULL){
                
                 fast = fast->next;
                
            }
            
            slow = slow->next;
            

            
        }
        
        
        
        return slow;
        
        
        
    }
    
    
    ListNode* middleNode(ListNode* head) {

        /*int ans = (getLength(head))/2 +1 ;
        
        ListNode* temp = head;
        int cnt = 1;
        
        while(cnt<ans){      
          temp = temp->next;
          cnt++;
            
        }
        
        
        return temp;*/
        
        return getMiddleElement(head);
        
        
        
        
        
    }
};