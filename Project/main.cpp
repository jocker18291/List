#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Doubly_linked_list.hpp"
#include "Singly_linked_list.hpp"

void menu_doubly_linked_list() {}
void menu_singly_linked_list() {}
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