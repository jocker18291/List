#include "Singly_linked_list.hpp"
#include <iostream>

Singly_linked_list::Singly_linked_list()					// constructor
{
	head = nullptr;
	tail = nullptr;
}
Singly_linked_list::~Singly_linked_list()					// desctuctor
{
	Node* current = head;
	while (current)
	{
		Node* next = current->next;
		delete current;
		current = next;
	}
}
void Singly_linked_list::push_front(int value)				// adds an element at the front of the list
{
	Node* new_Node = new Node(value);

	if (head == nullptr)
	{
		head = tail = new_Node;
	}
	else
	{
		new_Node->next = head;
		head = new_Node;
	}
	std::cout << "Added " << value << " at the front" << std::endl;
}			
void Singly_linked_list::push_back(int value)				// adds an element at the back of the list
{
	Node* new_Node = new Node(value);

	if (tail == nullptr)
	{
		head = tail = new_Node;
	}
	else
	{
		tail->next = new_Node;
		tail = new_Node;
	}
	std::cout << "Added " << value << " at the back" << std::endl;
}
void Singly_linked_list::remove_front() {}					// removes an element from the front of the list
void Singly_linked_list::remove_back() {}					// removes an element from the back of the list
void Singly_linked_list::print_forward() {}					// prints all elements of the list from front to back
bool Singly_linked_list::find(int value) {}					// searches for an element in the list
void Singly_linked_list::remove_randomly() {}				// removes a random element from the list
void Singly_linked_list::add_randomly(int value) {}			// adds an element at a random position