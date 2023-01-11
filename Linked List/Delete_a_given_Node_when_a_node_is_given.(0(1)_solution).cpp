#include <iostream>
#include <stdlib.h>

using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}



int main()
{

    ListNode *head = NULL;

    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 1);
    insertAtTail(head, 9);
   
    display(head);
    
//    let delete 5 value
    *head->next = *head->next->next;
    // it delete the value dircetly it not change its address;

    display(head);
    return 0;
}