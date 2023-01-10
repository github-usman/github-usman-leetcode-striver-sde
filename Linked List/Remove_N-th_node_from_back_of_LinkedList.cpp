#include <iostream>
#include <stdlib.h>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;

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
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int LengthOfLinkedList(node *head)
{
    int i = 0;
    while (head != NULL)
    {
        i++;
        head = head->next;
    }

    return i;
}

node *removeValueFromEnd(node *&head, int remove)
{
    node *dummy = NULL;

    node *n = new node(head->data);
    // if size one then given down the ans whcih is cout in main fuctnion you can see
     if(remove == 0){


        // forword the head one step more to the next
        head = head->next;
         if (dummy == NULL)
    {
        dummy = n;
    }
    node *temp = dummy;
    head = head->next;
    int i = 1;

    while (head != NULL)
    {
        if (temp->next == NULL)
        {

            if (i == (remove))
            {

                head = head->next;
                i++;
                continue;
            }
            node *n = new node(head->data);
            temp->next = n;
            head = head->next;
            i++;
        }
        temp = temp->next;
    }

    return dummy;
    }

    if (dummy == NULL)
    {
        dummy = n;
    }
    node *temp = dummy;
    head = head->next;
    int i = 1;

    while (head != NULL)
    {
        if (temp->next == NULL)
        {

            if (i == (remove))
            {

                head = head->next;
                i++;
                continue;
            }
            node *n = new node(head->data);
            temp->next = n;
            head = head->next;
            i++;
        }
        temp = temp->next;
    }

    return dummy;
}
int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
   
 

    display(head);
    int size = (LengthOfLinkedList(head));
    cout<<endl;

    if(size == 1){
        cout<<" "<<endl;
    }
    display(removeValueFromEnd(head, (size-2)));

    return 0;
}