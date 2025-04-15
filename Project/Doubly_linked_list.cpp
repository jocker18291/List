#include "Doubly_linked_list.hpp"
#include <iostream>

Doubly_linked_list::Doubly_linked_list()		// constructor
{
	head = nullptr;
	tail = nullptr;
}
Doubly_linked_list::~Doubly_linked_list()		// desctuctor
{
	Node* current = head;
	while (current)
	{
		Node* next = current->next;
		delete current;
		current = next;
	}
}
void Doubly_linked_list::push_front(int value)	// adds an element at the front of the list 
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
void Doubly_linked_list::push_back(int value)	// adds an element at the back of the list
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
void Doubly_linked_list::remove_front()			// removes an element from the front of the list
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
void Doubly_linked_list::remove_back()			// removes an element from the back of the list
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
void Doubly_linked_list::print_forward()		// prints all elements of the list from front to back
{
	Node* current = head;

	while (current)
	{
		std::cout << current->data << " ";
		current = current->next;
	}
	std::cout << std::endl;
}
void Doubly_linked_list::print_backward()		// prints all elements of the list from back to front
{
	Node* current = tail;

	while (current)
	{
		std::cout << current->data << " ";
		current = current->previous;
	}
	std::cout << std::endl;
}
bool Doubly_linked_list::find(int value)		// searches for an element in the list
{
	Node* current = head;

	while (current)
	{
		if (current->data == value)
		{
			return true;
		}
		current = current->next;
	}
	return false;
}
void Doubly_linked_list::remove_randomly()		// removes a random element from the list
{
	if (head == nullptr)
	{
		std::cout << "List is empty - there is nothing to remove" << std::endl;
		return;
	}
	Node* current = head;

	int size = 0;
	while (current)
	{
		size++;
		current = current->next;
	}

	int random_index = std::rand() % size;
	current = head;

	for (int i = 0; i < random_index; i++)
	{
		current = current->next;
	}

	int removed_value = current->data;

	if (current == head)
	{
		remove_front();
	}
	else if (current == tail)
	{
		remove_back();
	}
	else
	{
		current->previous->next = current->next;
		current->next->previous = current->previous;
		delete current;
		std::cout << "Removed " << removed_value << " from index " << random_index << std::endl;
	}
}
void Doubly_linked_list::add_randomly(int value)	// adds an element at a random position
{
	if (head == nullptr)
	{
		push_front(value);
		return;
	}
	Node* current = head;

	int size = 0;
	while (current)
	{
		size++;
		current = current->next;
	}

	int random_index = std::rand() % (size + 1);
	Node* new_node = new Node(value);
	
	if (random_index == 0)
	{
		push_front(value);
	}
	else if (random_index == size)
	{
		push_back(value);
	}
	else
	{
		current = head;
		for (int i = 0; i < random_index - 1; i++)
		{
			current = current->next;
		}

		new_node->next = current->next;
		new_node->previous = current;
		current->next->previous = new_node;
		current->next = new_node;

		std::cout << "Added " << value << " at index " << random_index << std::endl;
	}
}

void Doubly_linked_list::fillRandom(int n) {
	for(int i = 0; i < n; ++i) {
		int value = std::rand() % 100000;
		push_back(value);
	}
}