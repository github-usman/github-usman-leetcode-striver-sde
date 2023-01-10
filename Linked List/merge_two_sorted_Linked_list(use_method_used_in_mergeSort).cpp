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

    if (temp == NULL)
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

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

node *merge_tow_linked_list(node *&list1, node *&list2)
{

    node *merged = NULL;

    node *temp1 = list1;
    node *temp2 = list2;

    if(list1 == NULL && list2 == NULL){
        return 0;
    }else if(list1 == NULL || list2 == NULL){
        if(list1 == NULL){
            return list2;
        }else{
            return list1;
        }
    }
    if (list1->data <= list2->data)
    {
       
        node *nd = new node(list1->data);
        merged = nd;
        temp1 = temp1->next;
    }
    else
    {
       
        node *nd = new node(list2->data);
        merged = nd;

        temp2 = temp2->next;
    }
    node *temp = merged;



    while (temp1 != NULL && temp2 != NULL)
    {

        if (temp1->data <= temp2->data)
        {
        
            node *nd = new node(temp1->data);
            temp->next = nd;
            temp1 = temp1->next;
        }
        else
        {
         
            node *nd = new node(temp2->data);
            temp->next = nd;
            temp2 = temp2->next;
        }
        temp = temp->next;
    }

    if (temp1 != NULL)
    {
        temp->next = temp1;
    }
    else
    {
        temp->next = temp2;
    }


    return merged;
}

int main()
{

    node *list1 = NULL;
    node *list2 = NULL;

    // insertAtTail(list1, 1);
    // insertAtTail(list1, 2);
    // insertAtTail(list1, 3);
    // insertAtTail(list1, 4);
    // insertAtTail(list1, 5);
    // insertAtTail(list1, 6);

    insertAtTail(list2, 4);
    // insertAtTail(list2, 5);
    // insertAtTail(list2, 6);
    // insertAtTail(list2, 6);
    // insertAtTail(list2, 7);
    // insertAtTail(list2, 8);
    // display(list1);
    // cout << endl;
    // display(list2);
    // cout << endl;
    // display();

    display(merge_tow_linked_list(list1, list2));

    return 0;
}