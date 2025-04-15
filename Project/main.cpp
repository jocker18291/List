#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <vector>
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
            Doubly_list->add_randomly2(value);
            break;
        case '4':
            Doubly_list->remove_front();
            break;
        case '5':
            Doubly_list->remove_back();
            break;
        case '6':
            Doubly_list->remove_randomly2();
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
            Singly_list->add_randomly2(value);
            break;
        case '4':
            Singly_list->remove_front();
            break;
        case '5':
            Singly_list->remove_back();
            break;
        case '6':
            Singly_list->remove_randomly2();
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
            DynArr->add(DynArr->getSize(), value);
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
            DynArr->remove(DynArr->getSize() - 1);
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

void benchmark_all(int num_elements, int trials) {
    using namespace std::chrono;

    long long add_dyn = 0, search_dyn = 0, remove_dyn = 0;
    long long add_sll = 0, search_sll = 0, remove_sll = 0;
    long long add_dll = 0, search_dll = 0, remove_dll = 0;

    for(int t = 0; t < trials; ++t) {
        int pos = rand() % num_elements + 1;
        // --- Dynamic Array ---
        ArrayList arr;
        arr.fillRandom(num_elements);
        auto start = high_resolution_clock::now();
        arr.add(12345, pos);
        auto end = high_resolution_clock::now();
        add_dyn += duration_cast<nanoseconds>(end - start).count();

        start = high_resolution_clock::now();
        arr.search(12345);
        end = high_resolution_clock::now();
        search_dyn += duration_cast<nanoseconds>(end - start).count();

        start = high_resolution_clock::now();
        arr.remove(pos);
        end = high_resolution_clock::now();
        remove_dyn += duration_cast<nanoseconds>(end - start).count();

        // --- Singly Linked List ---
        Singly_linked_list sll;
        sll.fillRandom(num_elements);

        start = high_resolution_clock::now();
        sll.add_randomly(pos, 12345);
        end = high_resolution_clock::now();
        add_sll += duration_cast<nanoseconds>(end - start).count();

        start = high_resolution_clock::now();
        sll.find(12345);
        end = high_resolution_clock::now();
        search_sll += duration_cast<nanoseconds>(end - start).count();

        start = high_resolution_clock::now();
        sll.remove_randomly(pos);
        end = high_resolution_clock::now();
        remove_sll += duration_cast<nanoseconds>(end - start).count();

        // --- Doubly Linked List ---
        Doubly_linked_list dll;
        dll.fillRandom(num_elements);

        start = high_resolution_clock::now();
        dll.add_randomly(pos, 12345);
        end = high_resolution_clock::now();
        add_dll += duration_cast<nanoseconds>(end - start).count();

        start = high_resolution_clock::now();
        dll.find(12345);
        end = high_resolution_clock::now();
        search_dll += duration_cast<nanoseconds>(end - start).count();

        start = high_resolution_clock::now();
        dll.remove_randomly(pos);
        end = high_resolution_clock::now();
        remove_dll += duration_cast<nanoseconds>(end - start).count();
    }

    std::cout << "\n--- Benchmark Results (avg over " << trials << " trials) ---\n";
    std::cout << "Add time:      Dynamic Array: " << add_dyn / trials << " ns, "
              << "Singly LL: " << add_sll / trials << " ns, "
              << "Doubly LL: " << add_dll / trials << " ns\n";
    std::cout << "Search time:   Dynamic Array: " << search_dyn / trials << " ns, "
              << "Singly LL: " << search_sll / trials << " ns, "
              << "Doubly LL: " << search_dll / trials << " ns\n";
    std::cout << "Remove time:   Dynamic Array: " << remove_dyn / trials << " ns, "
              << "Singly LL: " << remove_sll / trials << " ns, "
              << "Doubly LL: " << remove_dll / trials << " ns\n";
}

int main()
{
    char choice;
    int value, n, trials;

    std::srand(std::time(nullptr));

    std::cout << "Choose list type:" << std::endl;
    std::cout << "1. Singly Linked List" << std::endl;
    std::cout << "2. Doubly Linked List" << std::endl;
    std::cout << "3. Dynamic Array" << std::endl;
    std::cout << "4. Benchmark" << std::endl;
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
        case '3':
            menu_dynamic_array();
            return 0;
        case '4':
            std::cout << "Enter number of elements: ";
            std::cin >> n;
            std::cout << "Enter number of trials: ";
            std::cin >> trials;
            benchmark_all(n, trials);
            return 0;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    }
}