#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* deleteFirst(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

Node* deleteIndex(Node* head, int index) {
    if (index < 0) {
        printf("Invalid index\n");
        return head;
    }

    if (index == 0) {
        return deleteFirst(head);
    }

    Node* p = head;
    Node* q = head->next;

    for (int i = 0; i < index - 1; i++) {
        if (q == NULL) {
            printf("Index out of bounds\n");
            return head;
        }
        p = p->next;
        q = q->next;
    }

    if (q == NULL) {
        printf("Index out of bounds\n");
        return head;
    }

    p->next = q->next;
    free(q);
    return head;
}

Node* deleteLast(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    Node* p = head;
    Node* q = head->next;

    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

void printList(Node* head) {
    Node* ptr = head;
    printf("Data is: ");
    while (ptr != NULL) {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    int nodeNumber;
    printf("Enter Node number: ");
    scanf("%d", &nodeNumber);

    Node* head = NULL;
    Node* current = NULL;

    for (int i = 0; i < nodeNumber; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter data for %d node: ", i + 1);
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = head;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    printf("Original linked list:\n");
    printList(head);

    // Example usage of delete functions
    head = deleteFirst(head);
    printf("Linked list after deleting first node:\n");
    printList(head);

    head = deleteIndex(head, 2);
    printf("Linked list after deleting node at index 2:\n");
    printList(head);

    head = deleteLast(head);
    printf("Linked list after deleting last node:\n");
    printList(head);

    // Free dynamically allocated memory
    Node* currentToDelete = head;
    while (currentToDelete != NULL) {
        Node* temp = currentToDelete;
        currentToDelete = currentToDelete->next;
        free(temp);
    }

    return 0;
}
