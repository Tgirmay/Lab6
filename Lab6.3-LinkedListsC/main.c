#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* prependNode(int input, Node* head){
    Node* new = (Node*) malloc(sizeof (Node*));
    new -> data = input;
    new -> next = head;
    head = new;
    return head;
}

int removeFront(Node* head){
    head = head -> next;
    return 0;
}

int printList(Node* head){
    Node * temp;
    for (temp = head; temp; temp = temp->next)
        printf("%d\n", temp->data);
    return 0;
}

int main() {
    Node* head = (Node*) malloc(sizeof(Node));
    Node one;
    head -> next = &one;
    one.data = 1;
    Node two;
    two.data = 2;
    one.next = &two;
    prependNode(3, head);
    printList(head);
    removeFront(head);
    printList(head);
    return 0;
}