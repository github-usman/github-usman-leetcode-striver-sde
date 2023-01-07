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

int size(node *head)
{
    int ans = 0;
    while (head != NULL)
    {
        ans++;
        head = head->next;
    }
    return ans;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    n->next = head;
    head = n;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
// hair turtle
node *midNode(node *head)
{
    node* temp1 = head;
    node* temp2 = head->next;

    while(temp2 != NULL && temp2->next != NULL){
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }

    if(temp2 == NULL){
        return temp1;
    }

    return temp1->next;
}
// find mid element of the linked list

int main()
{

    node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    // insertAtHead(head, 6);

    display(head);
    cout << endl;
    // int val = size(head);
   node* value = midNode(head);
   cout<<value->data<<endl;
   

    return 0;
}