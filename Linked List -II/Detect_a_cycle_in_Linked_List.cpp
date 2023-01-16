#include<bits/stdc++.h>
using namespace std;
 
  struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x)
      {
        val = x;
        next = NULL;
      } 
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
         ListNode* temp1 = head;
         ListNode* temp2 = head;
         if(temp1 == NULL || temp1->next == NULL || temp2->next->next == NULL){
             return false;
         }
        
  
    temp1 = temp1->next;
    temp2 = temp2->next->next;
    while( temp2->next != NULL && temp2->next->next != NULL ){
        if(temp1->next == temp2->next){
            return true;
        }
   
        if(temp2->next->next == NULL){
             return false;
         }
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    
    return false;
    }
};