#ifndef SINGLY_LINKED_LIST_HPP
#define SINGLY_LINKED_LIST_HPP

class Singly_linked_list
{
private:
    struct Node
    {
        int data;
        Node* next;
        Node(int x) : data(x), next(nullptr) {}
    };
    Node* head;
    Node* tail;
};

#endif