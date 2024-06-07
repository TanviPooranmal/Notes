#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next; // self referential structure
};

struct Node* head = NULL; // Initialize an empty linked list

void insertAtBeginning(int data) {
    // Insert a node at the beginning of the linked list
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at the beginning.\n");
}

void insertAtEnd(int data) {
    // Insert a node at the end of the linked list
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Inserted %d at the end.\n");

}

void insertAtPosition(int data, int position) {
    // Insert a node at a specific position in the linked list
    if (position < 0) {
        printf("Invalid position. Position must be non-negative.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 0) {
        // Insert at the beginning
        newNode->next = head;
        head = newNode;
        printf("Inserted %d at position %d.\n", data, position);
        return;
    }

    struct Node* current = head;
    struct Node* previous = NULL;
    int currentPosition = 0;

    while (current != NULL && currentPosition != position) {
        previous = current;
        current = current->next;
        currentPosition++;
    }

    if (currentPosition != position) {
        printf("Position %d is out of bounds. Node not inserted.\n", position);
        free(newNode);
        return;
    }

    previous->next = newNode;
    newNode->next = current;
    printf("Inserted %d at position %d.\n", data, position);
}

void deleteByKey(int key) {
    // Delete a node with a specific value
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* current = head;
    struct Node* previous = NULL;

    while (current != NULL) {
        if (current->data == key) {
            // If the node to be deleted is found
            if (previous == NULL) {
                // If it's the first node
                head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            printf("Deleted the node with key %d.\n", key);
            return;
        }

        previous = current;
        current = current->next;
    }

    printf("Node with key %d not found in the list.\n", key);
}

void deleteByPosition(int position) {
    // Delete a node at a specific position
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if (position == 0) {
        // If the node to be deleted is the first node
        struct Node* temp = head;
        head = temp->next;
        free(temp);
        printf("Deleted the node at position %d.\n", position);
        return;
    }

    struct Node* current = head;
    struct Node* previous = NULL;
    int currentPosition = 0;

    while (current != NULL && currentPosition != position) {
        previous = current;
        current = current->next;
        currentPosition++;
    }

    if (current == NULL) {
        printf("Position %d is out of bounds. Node not found.\n", position);
        return;
    }

    previous->next = current->next;
    free(current);
    printf("Deleted the node at position %d.\n", position);
}

void traverse() {
    // Traverse and display the linked list
    struct Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

int search(int key) {
    // Search for a specific value in the linked list
    // Return the position if found, or -1 if not found
    struct Node* current = head;
    int position = 0;

    while (current != NULL) {
        if (current->data == key) {
            return position; // Value found at this position
        }

        current = current->next;
        position++;
    }

    return -1; // Value not found in the linked list
}

int getSize() {
    // Return the size (number of nodes) in the linked list
    struct Node* current = head;
    int size = 0;

    while (current != NULL) {
        size++;
        current = current->next;
    }

    return size;
}

void reverse() {
    // Reverse the linked list
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

int main() {
    // Perform operations on the linked list
    return 0;
}
