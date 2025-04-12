#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Doubly_linked_list.hpp"
#include "Singly_linked_list.hpp"

void menu_doubly_linked_list()
{
    Doubly_linked_list doubly_list;
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
            doubly_list.push_front(value);
            break;
        case '2':
            std::cout << "Enter value to add at the back: ";
            std::cin >> value;
            doubly_list.push_back(value);
            break;
        case '3':
            std::cout << "Enter value to add at a random position: ";
            std::cin >> value;
            doubly_list.add_randomly(value);
            break;
        case '4':
            doubly_list.remove_front();
            break;
        case '5':
            doubly_list.remove_back();
            break;
        case '6':
            doubly_list.remove_randomly();
            break;
        case '7':
            std::cout << "Enter value to find: ";
            std::cin >> value;
            if (doubly_list.find(value))
            {
                std::cout << "Element found in the list" << std::endl;
            }
            else
            {
                std::cout << "Element not found" << std::endl;
            }
            break;
        case '8':
            doubly_list.print_forward();
            break;
        case '9':
            doubly_list.print_backward();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    } while (choice != '0');
}

void menu_singly_linked_list()
{
    Singly_linked_list singly_list;
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
            singly_list.push_front(value);
            break;
        case '2':
            std::cout << "Enter value to add at the back: ";
            std::cin >> value;
            singly_list.push_back(value);
            break;
        case '3':
            std::cout << "Enter value to add at a random position: ";
            std::cin >> value;
            singly_list.add_randomly(value);
            break;
        case '4':
            singly_list.remove_front();
            break;
        case '5':
            singly_list.remove_back();
            break;
        case '6':
            singly_list.remove_randomly();
            break;
        case '7':
            std::cout << "Enter value to find: ";
            std::cin >> value;
            if (singly_list.find(value))
            {
                std::cout << "Element found in the list" << std::endl;
            }
            else
            {
                std::cout << "Element not found" << std::endl;
            }
            break;
        case '8':
            singly_list.print_forward();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    } while (choice != '0');
}
int main()
{
    char choice;
    int value;;

    std::srand(std::time(nullptr));

    std::cout << "Choose list type:" << std::endl;
    std::cout << "1. Singly Linked List" << std::endl;
    std::cout << "2. Doubly Linked List" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Enter your choice: ";

    while (true)
    {
        std::cin >> choice;

        switch (choice)
        {
        case '0':
            return 0;
        case '1':
            menu_singly_linked_list();
            return 0;
        case '2':
            menu_doubly_linked_list();
            return 0;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    }
}