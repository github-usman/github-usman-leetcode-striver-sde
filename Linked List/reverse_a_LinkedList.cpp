#include<iostream>
#include<stdlib.h>
//  * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
   ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };



   struct node2 {
      int data;
      node2 *next;
      node2(int val){
        data = val;
        next = NULL;
      }
  };

void reversedLinkedList(node2* &head2,ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        node2* n = new node2(temp->val);
        n->next = head2;
        head2 = n;
        temp = temp->next;
    }

}

void copyTheValue(ListNode* &head,node2* head2){
    ListNode* temp = head;
    node2* temp2 = head2;
    while(temp != NULL){
        temp->val = temp2->data;
        temp = temp->next;
        temp2 = temp2->next; 
    }
}


int main(){

   
        // reverse using another linked list
        node2* head2 = NULL;
        ListNode*  head = NULL;
        reversedLinkedList(head2,head);
        // ListNode* reversed = NULL;
        copyTheValue(head,head2);
  
    
    return 0;
}
