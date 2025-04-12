#include "Doubly_linked_list.hpp"
#include <iostream>

Doubly_linked_list::Doubly_linked_list()			// constructor
{
	head = nullptr;
	tail = nullptr;
}
Doubly_linked_list::~Doubly_linked_list()			// desctuctor
{
	Node* current = head;
	while (current)
	{
		Node* next = current->next;
		delete current;
		current = next;
	}
}
void Doubly_linked_list::push_front(int value)		// adds an element at the front of the list
{
	Node* new_Node = new Node(value);

	if (head == nullptr)
	{
		head = tail = new_Node;
	}
	else
	{
		new_Node->next = head;
		head->previous = new_Node;
		head = new_Node;
	}
	std::cout << "Added " << value << " at the front" << std::endl;
}
void Doubly_linked_list::push_back(int value)		// adds an element at the back of the list
{
	Node* new_Node = new Node(value);

	if (tail == nullptr)
	{
		head = tail = new_Node;
	}
	else
	{
		new_Node->previous = tail;
		tail->next = new_Node;
		tail = new_Node;
	}
	std::cout << "Added " << value << " at the back" << std::endl;
}
void Doubly_linked_list::remove_front()				// removes an element from the front of the list
{
	if (head == nullptr)
	{
		std::cout << "List is empty - there is nothing to remove" << std::endl;
		return;
	}
	if (head == tail)
	{
		delete head;
		head = tail = nullptr;
	}
	else
	{
		Node* temporary = head;
		head = head->next;
		head->previous = nullptr;
		delete temporary;
	}
	std::cout << "Element removed from the front" << std::endl;
}
void Doubly_linked_list::remove_back()				// removes an element from the back of the list
{
	if (head == nullptr)
	{
		std::cout << "List is empty - there is nothing to remove" << std::endl;
		return;
	}
	if (head == tail)
	{
		delete head;
		head = tail = nullptr;
	}
	else
	{
		Node* temporary = tail;
		tail = tail->previous;
		tail->next = nullptr;
		delete temporary;
	}
	std::cout << "Element removed from the back" << std::endl;
}
void Doubly_linked_list::print_forward()			// prints all elements of the list from front to back
{ }
void Doubly_linked_list::print_backward()			// prints all elements of the list from back to front
{ }
bool Doubly_linked_list::find(int value)			// searches for an element in the list
{ }
void Doubly_linked_list::remove_randomly()			// removes a random element from the list
{ }
void Doubly_linked_list::add_randomly(int value)	// adds an element at a random position
{ }