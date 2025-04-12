#ifndef DOUBLY_LINKED_LIST_HPP
#define DOUBLY_LINKED_LIST_HPP

class Doubly_linked_list
{
private:
    struct Node {
        int data;
        Node* previous;
        Node* next;
        Node(int x) : data(x), previous(nullptr), next(nullptr) {}
    };
    Node* head;
    Node* tail;
};
#endif