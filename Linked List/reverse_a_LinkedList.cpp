#include<iostream>
#include<stdlib.h>

using namespace std;


struct node{
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void  insertAtTail(node* &head,int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return ;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    
}



node* reversedLinkedList(node* &head){
    node* move = NULL;
    node* temp;

    while(head != NULL){
        temp = head->next;  //for doing iteration
        head->next = move; //for giving the address of the new node 
        move = head; // putting the value from original to new node
        head = temp; //move forward the iteration one value next
    }

    return move;
}
void display(node* head){
    node* temp = head;
    // cout<<"head->";
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    head = reversedLinkedList(head);
    display(head);


   



    return 0;
}