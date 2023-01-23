/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  int display(ListNode* head){
      int i = 0;
     while(head != NULL){
         i++;
         cout<<head->val<<"->";
         head = head->next;
     }
     return i;
 }

ListNode* getInter(ListNode* headA,ListNode* headB,int A,int B){
    // cout<<endl;
    // cout<<A<<" = size A"<<B<<" = size B"<<endl;
    while(A != B){
        A--;
        headA = headA->next;
    }
    // cout<<endl;
    // cout<<A<<" = size A"<<B<<" = size B"<<endl;
    cout<<"values"<<endl;
    while(headA != NULL){
        cout<<headA->val<<" "<<headB->val<<" "<<endl;
        if(headA == headB){
            cout<<"hell";
            cout<<headB->val<<endl;
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int sizeA = display(headA);
        int sizeB = display(headB);

        if(sizeA>sizeB){
            return getInter(headA,headB,sizeA,sizeB);
        }else{
            return getInter(headB,headA,sizeB,sizeA);
        }

        return NULL;
    }
};