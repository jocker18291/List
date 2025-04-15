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

public:
    Singly_linked_list();                 // constructor
    ~Singly_linked_list();                // destructor

    void push_front(int value);           // adds an element at the front of the list 
    void push_back(int value);            // adds an element at the back of the list
    void add_randomly(int value);         // adds an element at a random position

    void remove_randomly();               // removes a random element from the list
    void remove_front();                  // removes an element from the front of the list
    void remove_back();                   // removes an element from the back of the list

    bool find(int value);                 // Szukanie elementu w li�cie

    void print_forward();                 // prints all elements of the list from front to back

    void fillRandom(int count);
};

#endif