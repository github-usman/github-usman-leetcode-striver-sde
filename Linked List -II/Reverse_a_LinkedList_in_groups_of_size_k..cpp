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

ListNode* reversedLinkedList(ListNode* head, int k){
  ListNode* dummy = NULL;
    ListNode* finalDummy = NULL;
    ListNode* temp;
    ListNode* temp2;
    ListNode* temp3;
    ListNode* lastTemp = NULL;

    int i = 0,j = 0;
    while(head != NULL){
            j++;
        ListNode* xx = new ListNode(head->val);
        // cout<<head->val<<" ";
        if(lastTemp == NULL){
            lastTemp = xx;
            temp3 = lastTemp;
        }else{
            temp3->next = xx;
            temp3 = temp3->next;  
        }
        temp = head->next;
        head->next = dummy;
        dummy = head;
        head = temp;

        
         if(j == k){
            lastTemp = NULL;
            j = 0;
            temp3  = NULL;
        }
       
       
        i++;
        if(i == k){
            if(finalDummy == NULL){
                finalDummy = dummy;
                temp2 = finalDummy;
            }else{
                while(temp2->next!=NULL){
                    temp2 = temp2->next;
                }
                temp2->next = dummy;
            }
         
            i = 0;
            dummy = NULL;
        }
    }


    if(i != 0){
           
       while(temp2->next!=NULL){
                    temp2 = temp2->next;
                }
                temp2->next = lastTemp;
    }
    
    return finalDummy;
}
int main(){

    ListNode* head = NULL;
    int k = 2;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
  

    // display(head);

    head = reversedLinkedList(head,k);
    display(head);

    return 0;
}