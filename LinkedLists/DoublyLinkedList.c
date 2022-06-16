#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    struct Node *next;
    int data;
};

void DLLTraversal(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d \n", p->data);
        p = p->next;
    }
}
struct Node *DLLinsertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->next = NULL;
    ptr->prev = p;
    p->next = ptr;
    return head;
}

struct Node *DLLInsetionAtStart(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    head->prev = newNode;
    newNode->next = head;
    newNode->prev = NULL;
    newNode->data = data;

    return (newNode);
}
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    int i = 0;
    while (i != index - 1) // making p point to index's before number
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->prev = p;
    p->prev = ptr;
    p->next = ptr;

    return (head);
}
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p, *q;
    p = head;
    q = head->next;

    int i = 0;
    while (i != index - 1) // making p point to index's before number and q to index's number
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);

    return (head);
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->next = second;
    head->data = 1;
    second->prev = head;
    second->next = third;
    second->data = 2;
    third->prev = second;
    third->next = fourth;
    third->data = 3;
    fourth->prev = third;
    fourth->next = NULL;
    fourth->data = 4;
    printf("Dobly Linked list transversal\n");
    DLLTraversal(head);
    head = DLLInsetionAtStart(head, 12);
    DLLTraversal(head);

    return 0;
}
/**
 * It can be used to implement undo/redo operations.

    Real-Time Applications of Doubly Linked List:

    Doubly linked lists are used in web page navigation in both forward and backward directions.
    It can be used in games like a deck of cards.
 *
 */