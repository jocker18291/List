#include <iostream>
#include <cstdlib>
#include <ctime>
#include "arrayList.h"
#include "Doubly_linked_list.hpp"
#include "Singly_linked_list.hpp"

void menu_doubly_linked_list()
{
    Doubly_linked_list* Doubly_list = new Doubly_linked_list();
    char choice;
    int value;
    do {
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "Doubly Linked List Menu:" << std::endl;
        std::cout << "1. Add element at the front" << std::endl;
        std::cout << "2. Add element at the back" << std::endl;
        std::cout << "3. Add element at a random position" << std::endl;
        std::cout << "4. Remove element from the front" << std::endl;
        std::cout << "5. Remove element from the back" << std::endl;
        std::cout << "6. Remove element from a random position" << std::endl;
        std::cout << "7. Find element" << std::endl;
        std::cout << "8. Print list from the front" << std::endl;
        std::cout << "9. Print list from the back" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        switch (choice)
        {
        case '0':
            break;
        case '1':
            std::cout << "Enter value to add at the front: ";
            std::cin >> value;
            Doubly_list->push_front(value);
            break;
        case '2':
            std::cout << "Enter value to add at the back: ";
            std::cin >> value;
            Doubly_list->push_back(value);
            break;
        case '3':
            std::cout << "Enter value to add at a random position: ";
            std::cin >> value;
            Doubly_list->add_randomly(value);
            break;
        case '4':
            Doubly_list->remove_front();
            break;
        case '5':
            Doubly_list->remove_back();
            break;
        case '6':
            Doubly_list->remove_randomly();
            break;
        case '7':
            std::cout << "Enter value to find: ";
            std::cin >> value;
            if (Doubly_list->find(value))
            {
                std::cout << "Element found in the list" << std::endl;
            }
            else
            {
                std::cout << "Element not found" << std::endl;
            }
            break;
        case '8':
            Doubly_list->print_forward();
            break;
        case '9':
            Doubly_list->print_backward();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    } while (choice != '0');
    delete Doubly_list;
}

void menu_singly_linked_list()
{
    Singly_linked_list* Singly_list = new Singly_linked_list();
    char choice;
    int value;
    do {
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "Singly Linked List Menu:" << std::endl;
        std::cout << "1. Add element at the front" << std::endl;
        std::cout << "2. Add element at the back" << std::endl;
        std::cout << "3. Add element at a random position" << std::endl;
        std::cout << "4. Remove element from the front" << std::endl;
        std::cout << "5. Remove element from the back" << std::endl;
        std::cout << "6. Remove element from a random position" << std::endl;
        std::cout << "7. Find element" << std::endl;
        std::cout << "8. Print list from the front" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        switch (choice)
        {
        case '0':
            break;
        case '1':
            std::cout << "Enter value to add at the front: ";
            std::cin >> value;
            Singly_list->push_front(value);
            break;
        case '2':
            std::cout << "Enter value to add at the back: ";
            std::cin >> value;
            Singly_list->push_back(value);
            break;
        case '3':
            std::cout << "Enter value to add at a random position: ";
            std::cin >> value;
            Singly_list->add_randomly(value);
            break;
        case '4':
            Singly_list->remove_front();
            break;
        case '5':
            Singly_list->remove_back();
            break;
        case '6':
            Singly_list->remove_randomly();
            break;
        case '7':
            std::cout << "Enter value to find: ";
            std::cin >> value;
            if (Singly_list->find(value))
            {
                std::cout << "Element found in the list" << std::endl;
            }
            else
            {
                std::cout << "Element not found" << std::endl;
            }
            break;
        case '8':
            Singly_list->print_forward();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    } while (choice != '0');
    delete Singly_list;
}

void menu_dynamic_array() {
    ArrayList* DynArr = new ArrayList();
    char choice;
    int value;
    do {
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "Dynamic Array Menu:" << std::endl;
        std::cout << "1. Add element at the front" << std::endl;
        std::cout << "2. Add element at the back" << std::endl;
        std::cout << "3. Add element at a random position" << std::endl;
        std::cout << "4. Remove element from the front" << std::endl;
        std::cout << "5. Remove element from the back" << std::endl;
        std::cout << "6. Remove element from a random position" << std::endl;
        std::cout << "7. Find element" << std::endl;
        std::cout << "8. Print list from the front" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        switch (choice)
        {
        case '0':
            break;
        case '1':
            std::cout << "Enter value to add at the front: ";
            std::cin >> value;
            DynArr->add(0, value);
            break;
        case '2':
            std::cout << "Enter value to add at the back: ";
            std::cin >> value;
            DynArr->add(size, value);
            break;
        case '3':
            std::cout << "Enter value to add at a random position: ";
            std::cin >> value;
            DynArr->add(0, value);
            break;
        case '4':
            DynArr->remove(0);
            break;
        case '5':
            DynArr->remove(size - 1);
            break;
        case '6':
            DynArr->remove(0);
            break;
        case '7':
            std::cout << "Enter value to find: ";
            std::cin >> value;
            if (DynArr->search(value))
            {
                std::cout << "Element found in the list" << std::endl;
            }
            else
            {
                std::cout << "Element not found" << std::endl;
            }
            break;
        case '8':
            DynArr->print();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    } while (choice != '0');
    delete DynArr;
}

int main()
{
    char choice;
    int value;;

    std::srand(std::time(nullptr));

    std::cout << "Choose list type:" << std::endl;
    std::cout << "1. Singly Linked List" << std::endl;
    std::cout << "2. Doubly Linked List" << std::endl;
    std::cout << "3. Dynamic Array" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Enter your choice: ";

    while (true)
    {
        std::cin >> choice;

        switch (choice)
        {
        case '0':
            break;
        case '1':
            menu_singly_linked_list();
            break;
        case '2':
            menu_doubly_linked_list();
            break;
        case '3':
            menu_dynamic_array();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    }
}