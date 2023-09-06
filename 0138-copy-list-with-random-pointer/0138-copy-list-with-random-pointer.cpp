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
    
    void insertAtTail(Node* &head, Node* &tail, int val){
        Node* cloneList = new Node(val);

       if(head == NULL){
           head = cloneList;
           tail = cloneList;
       }
        else{
            tail->next = cloneList;
            tail = cloneList;
        }
    
    }
    
    Node* copyRandomList(Node* head) {
               
         Node* temp = head;
         Node* cloneHead = NULL;
         Node* cloneTail = NULL;
        
        while(temp!= NULL){
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }
    
        Node* cloneNode = cloneHead;
        Node* ogNode = head;  
        
        unordered_map<Node*, Node*> map;
        
        while(ogNode!= NULL){
            
            map[ogNode] = cloneNode;
            ogNode = ogNode->next;
            cloneNode = cloneNode->next;
      
        }
        
         cloneNode = cloneHead;
         ogNode = head;  
        
        while(cloneNode != NULL){
            cloneNode->random = map[ogNode->random];
             ogNode = ogNode->next;
            cloneNode = cloneNode->next;
            
        }
        
            
     return cloneHead;   
    }
};