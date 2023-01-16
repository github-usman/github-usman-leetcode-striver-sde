#include<iostream>
#include<stdlib.h>

using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = NULL;
    }
};

ListNode* copy(ListNode* head){
    ListNode* dummy = NULL;
    ListNode* n = new ListNode(head->val);
    dummy = n;
    ListNode* temp = dummy;
    head = head->next;
    while(head != NULL){
        ListNode* n = new ListNode(head->val);
        temp->next = n;
        temp = temp->next;
        head = head->next;
    }
    return dummy;
}

void insertAtTail(ListNode* &head,int x){
    ListNode* n = new ListNode(x);
    ListNode* temp = head;

    if(head == NULL){
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    
}

void display(ListNode* head){
    while (head != NULL)
    {
       cout<<head->val<<"->";
       head = head->next;
    }
    cout<<endl;
    // cout<<"findish"<<endl;
}

ListNode* reversedLinkedList(ListNode* head){
    ListNode* dummy = NULL;
    ListNode* temp;

    while(head != NULL){
        temp = head->next;
        head->next = dummy;
        dummy = head;
        head = temp;
    }

    return dummy;
}

 bool isPalindrome(ListNode* head) {
        
        ListNode* dummy = copy(head);
        head = reversedLinkedList(head); 
       
        // display(head);
        // display(dummy);
        while(dummy != NULL && (dummy->val == head->val)){
            dummy = dummy->next;
            head = head->next;
        }
        if(head == NULL){
           return true;
        }else{
           return false;
        }
    }

int main(){
    
    ListNode* head = NULL;
  
    int k = 2;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,1);
  

    // display(head);

    cout<<isPalindrome(head)<<endl;



    return 0;
}
