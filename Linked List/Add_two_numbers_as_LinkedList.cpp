#include <iostream>
#include <stdlib.h>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtTail(ListNode *&head, int data)
{
    ListNode *n = new ListNode(data);
    ListNode *temp = head;

    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

int display(ListNode *head)
{
    int i = 0;
    while (head != NULL)
    {
        cout << head->val << "->";
        head = head->next;
        i++;
    }
    cout << "NULL" << endl;

    return i;
}

ListNode *reverseLinkedList(ListNode *head)
{
    ListNode *dummy = NULL;
    ListNode *temp;

    while (head != NULL)
    {
        temp = head->next;
        head->next = dummy;
        dummy = head;
        head = temp;
    }
    return dummy;
}

ListNode *addTwoLinkedList(ListNode *l1, ListNode *l2, int l1Size, int l2Size)
{

    ListNode *dummy = NULL;
    ListNode *temp;
    if (l1Size != l2Size)
    {
        cout<<"if"<<endl;
        if (l1Size > l2Size)
        {
        
            l1Size--;
            ListNode *n = new ListNode(l1->val);
            dummy = n;
            temp = dummy;
            l1 = l1->next;
            
            while (l1Size > l2Size)
            {
                ListNode *n = new ListNode(l1->val);
                temp->next = n;
                l1Size--;
                temp = temp->next;
                  
                l1 = l1->next;
            }
        }
        else
        {
             
            
                l2Size--;
                ListNode *n = new ListNode(l2->val);
                dummy = n;
                temp = dummy;
                l2 = l2->next;
              
                while (l1Size < l2Size)
                {

                    ListNode *n = new ListNode(l2->val);
                    temp->next = n;
                    l2Size--;
                    temp = temp->next;
                    l2 = l2->next;
                    
                }
            
        }
        bool isCarry = false;
        ListNode *carry = new ListNode(0);

        while (l2 != NULL && l1 != NULL)
        {
            ListNode *n = new ListNode(l1->val + l2->val + carry->val);
            if (n->val > 9)
            {
                isCarry = true;
                carry = new ListNode(1);
                ListNode* carr = new ListNode(n->val % 10);
                temp->next  = carr;
            }
            else
            {
                isCarry = false;
                carry = new ListNode(0);
                temp->next = n;

                
            }
            temp = temp->next;
            l2 = l2->next;
            l1 = l1->next;
        }
        if (isCarry)
        {
            ListNode *n = new ListNode(carry->val);
            temp->next = n;
        }
    }
    else
    {
        ListNode *n = new ListNode(l1->val + l2->val);
        dummy = n;
        temp = dummy;
        while (l1Size)
        {
            l1Size--;
        }
    }

    return dummy;
}
int main()
{

    // create two diffrent linked list

    ListNode *l1 = NULL;
    ListNode *l2 = NULL;

    // insert value using insertAtTail function in list one and two
    insertAtTail(l1, 1);
    insertAtTail(l1, 2);
    insertAtTail(l1, 3);
    insertAtTail(l1, 4);
    insertAtTail(l1, 5);

    insertAtTail(l2, 3);
    insertAtTail(l2, 4);
    insertAtTail(l2, 5);

    // insertAtTail(l2, 7);

    // print the linked list value
    // using display function
    display(l1);
    display(l2);

    // reverse the LinkList using reverseLinkedList() function ;
    // reverse the linked list using reverslinked lsit function

    l1 = reverseLinkedList(l1);
    l2 = reverseLinkedList(l2);

    int l1Size = display(l1);
    int l2Size = display(l2);

    // now adding these two linked list with carry and all cases
    display(addTwoLinkedList(l1, l2, l1Size, l2Size));

    return 0;
}