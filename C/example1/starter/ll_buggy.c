#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));

    if (*head == NULL)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *temp;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head.data);
        head = head->next;
    }
    printf("NULL\n");
}

int pop(struct Node **head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return -1;
    }

    struct Node *temp = *head;

    if (temp->next == NULL)
    {
        int val = temp->data;
        head = NULL;
        free(temp);
        return val;
    }

    while (temp->next->next != NULL)
        temp = temp->next;

    int value = temp->next->data;
    temp->next = NULL;
    return value;
}

int main()
{
    struct Node *head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    printList(head);

    int popped = pop(&head);
    printf("Popped: %d\n", popped);
    printList(head);

    return 0;
}