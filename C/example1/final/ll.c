#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

int pop(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty. Nothing to pop.\n");
        return -1; // or an error code
    }

    struct Node *temp = *head;

    // Only one element
    if (temp->next == NULL)
    {
        int value = temp->data;
        free(temp);
        *head = NULL;
        return value;
    }

    // Traverse to second last
    while (temp->next->next != NULL)
        temp = temp->next;

    int value = temp->next->data;
    free(temp->next);
    temp->next = NULL;
    return value;
}

void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
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
