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

int  display(ListNode* head){
    int i = 0;
    while (head != NULL)
    {
        cout<<head->val<<"->";
        head = head->next;
        i++;
        
    }
    cout<<"NULL"<<endl;

   return i; 
}

void inserAtTail(ListNode* &head,int x){
    ListNode* n = new ListNode(x);
    ListNode* temp = head;
    if(head == NULL){
        head = n;
        return ;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

ListNode* rotate(ListNode* head,int x){

    ListNode* dummy = NULL;
    ListNode* head2 = head;
    ListNode* temp1;
    ListNode* temp2;
     int total_size = display(head);
     if(total_size == 0){
        return NULL;
    }
   
    int diff = x%total_size;
    int mid = total_size-diff;
    if(diff){
        mid++;
    }else{
        return head;
    }
   

    int i = 0,j = 0;

    while(head != NULL){
        j++;
        cout<<j<<" = j"<<endl;
        if(j<mid){
            head = head->next;
        }else{
            if(dummy == NULL){
                ListNode* n = new ListNode(head->val);
                dummy = n;
                temp1 = dummy;
                // dummy = temp2;

            }else{
                ListNode* n = new ListNode(head->val);
                temp1->next = n;
                temp1 = temp1->next;
                
            }
            head = head->next;
        }
    

    }
    mid--;
    while (head2 != NULL && i != mid)
    {
                ListNode* n = new ListNode(head2->val);
                temp1->next = n;
                temp1 = temp1->next;
                head2 = head2->next;
                i++;
    }
    

    return dummy;
}
int main(){

    ListNode* head = NULL;
    inserAtTail(head,0);
    inserAtTail(head,1);
    inserAtTail(head,2);
    // inserAtTail(head,3);
    // inserAtTail(head,4);
    // inserAtTail(head,5);
    int  size = display(head);

    int k = 4;
    ListNode* khead;
    khead = rotate(head,k);

    display(khead);
    return 0;
}