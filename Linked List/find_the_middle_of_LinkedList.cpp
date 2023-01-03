#include<iostream>
#include<stdlib.h>

using namespace std;
// create inbuilt node
 struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
// value insertion
void insertAtTail(ListNode* &head, int data){
    ListNode* n = new ListNode(data);
    ListNode* temp = head;

    if(head == NULL){
        head = n;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
} 
// to display what is happening
int display(ListNode* head){
    int cnt = 0;
    ListNode* temp = head;
    while(temp != NULL){
        cnt++;
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    return cnt;
}

ListNode* middleElement(ListNode* head,int cnt){
    int mid = (cnt/2)+1;
    int i = 1;
    ListNode* temp = head;

    while(1){

        if(mid == i){
            break;
        }
        i++;
        temp = temp->next;

    }
    return temp;
}

int main(){

      int n;
      cin>>n;
    
        ListNode* head = NULL;
        while(n--)
        {
            int temp;
            cin>>temp;
            insertAtTail(head,temp);
        }
        

        int cnt = display(head);
        cout<<cnt<<endl;
        
        ListNode* ans = middleElement(head,cnt);
        cout<<ans->val<<endl;
        
      
      

      return 0;
}