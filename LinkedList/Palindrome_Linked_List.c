bool isPalindrome(struct ListNode* head){
    struct ListNode* detectNode = head; 
    struct ListNode* halfNode = head;
    
    while(detectNode != NULL && detectNode->next != NULL){              // find half of list
        detectNode = detectNode->next->next;
        halfNode = halfNode->next;
    }
    
    struct ListNode* previous = NULL;
    
    //halfNode = halfNode->next;              // shift right
    //struct ListNode* reverseHead = halfNode;
    struct ListNode* run = halfNode;
    struct ListNode* current = NULL;
    
    while(halfNode != NULL){               // reverse list
        run = halfNode->next;
        halfNode->next = previous;
        previous = halfNode;
        halfNode = run;
    }   
    
    while(previous != NULL){
        if (previous->val != head->val) return false;
        else{
            previous = previous->next;   
            head = head->next;
        }
    }
    
    return true;
}