#include <iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node * next;
};

// Insert Node at first
void push(Node** head, int new_data)
{
    // allocate node
    Node * new_node = new Node();

    // put in the data
    new_node->data = new_data;
     
     // make next of new node as head
    new_node->next = (*head);

    // move the head to point the next node
    *head = new_node;

}

void insertAfter(Node* prev_node,  int new_data)
{
    // check if prevnode is null
    if(prev_node == NULL)
    {
        cout<<"The given previous node cannot be null";
        return;
    }

    Node * new_node = new Node();
    new_node->data = new_data;
     new_node->next = prev_node->next;
     prev_node->next = new_node;

}

void InsertatEnd(Node **head, int new_data)
{
    Node * new_node = new Node();

    Node * last = *head;

    new_node->data = new_data;
    new_node->next = NULL;

// if linked list is empty then make new node as head
    if(head == NULL)
    {
        *head = new_node;
        return;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void printlist(Node *node)
{
    while(node!= NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
    
}

int main()
{
    Node * head = NULL;

    push(&head, 6);
    InsertatEnd(&head, 8);
    InsertatEnd(&head, 9);
    // insertAfter(head, 7);
    // insertAfter(head, 10);
    printlist(head);
}

