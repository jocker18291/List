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

public:
    Doubly_linked_list();                 // constructor
    ~Doubly_linked_list();                // destructor

    void push_front(int value);           // adds an element at the front of the list 
    void push_back(int value);            // adds an element at the back of the list
    void add_randomly(int random_index, int value);         // adds an element at a random position
    void add_randomly2(int value);

    void remove_randomly(int random_index);               // removes a random element from the list
    void remove_randomly2();
    void remove_front();                  // removes an element from the front of the list
    void remove_back();                   // removes an element from the back of the list

    bool find(int value);                 // Szukanie elementu w li�cie

    void print_forward();                 // prints all elements of the list from front to back
    void print_backward();                // prints all elements of the list from back to front
    void fillRandom(int n);
};

#endif