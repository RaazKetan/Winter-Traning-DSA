#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "\nElement: " << ptr->data;
        ptr = ptr->next;
    }
}

int main()
{
     Node *head;
     Node *second;
     Node *third;

    //Allocate memory for nodes in the linked list in HEAP
    head = ( Node *)malloc(sizeof( Node));
    second = (Node *)malloc(sizeof( Node));
    third = ( Node *)malloc(sizeof( Node));

    // link first and second node
    head->data = 7;
    head->next = second;

    second->data = 15;
    second->next = third;

    third->data = 10;
    third->next = NULL;
    linkedlisttraversal(head);

    return 0;
}