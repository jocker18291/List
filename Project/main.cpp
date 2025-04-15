#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
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

void benchmark_dynamic_array(int num_elements, int trials) {
    using namespace std::chrono;

    long long total_add_time = 0;
    long long total_search_time = 0;
    long long total_remove_time = 0;

    for(int t = 0; t < trials; ++t) {
        ArrayList list;
        list.fillRandom(num_elements);

        auto start_add = high_resolution_clock::now();
        list.add(12345, list.getSize() / 2); // w srodku
        auto end_add = high_resolution_clock::now();
        total_add_time += duration_cast<nanoseconds>(end_add - start_add).count();

        auto start_search = high_resolution_clock::now();
        list.search(12345); // w srodku
        auto end_search = high_resolution_clock::now();
        total_search_time += duration_cast<nanoseconds>(end_search - start_search).count();

        auto start_remove = high_resolution_clock::now();
        list.remove(list.getSize() / 2); // w srodku
        auto end_remove = high_resolution_clock::now();
        total_remove_time += duration_cast<nanoseconds>(end_remove - start_remove).count();
    }
    std::cout << "\n--- Benchmark Results (avg over " << trials << " trials) --- \n";
    std::cout << "Insert time: " << total_add_time / trials << " ns\n";
    std::cout << "Search time: " << total_search_time / trials << " ns\n";
    std::cout << "Remove time: " << total_remove_time / trials << " ns\n";
}

void benchmark_singly_linked_list(int num_elements, int trials) {
    using namespace std::chrono;

    long long total_add_time = 0;
    long long total_search_time = 0;
    long long total_remove_time = 0;

    for(int t = 0; t < trials; ++t) {
        Singly_linked_list list;
        list.fillRandom(num_elements);

        auto start_add = high_resolution_clock::now();
        list.add_randomly(12345);
        auto end_add = high_resolution_clock::now();
        total_add_time += duration_cast<nanoseconds>(end_add - start_add).count();

        auto start_search = high_resolution_clock::now();
        list.find(12345);
        auto end_search = high_resolution_clock::now();
        total_search_time += duration_cast<nanoseconds>(end_search - start_search).count();

        auto start_remove = high_resolution_clock::now();
        list.remove_randomly();
        auto end_remove = high_resolution_clock::now();
        total_remove_time += duration_cast<nanoseconds>(end_remove - start_remove).count();
    }
    std::cout << "\n--- Benchmark Results for Singly Linked List (avg over " << trials << " trials) ---\n";
    std::cout << "Insert time: " << total_add_time / trials << " ns\n";
    std::cout << "Search time: " << total_search_time / trials << " ns\n";
    std::cout << "Remove time: " << total_remove_time / trials << " ns\n";
}

void benchmark_doubly_linked_list(int num_elements, int trials) {
    using namespace std::chrono;

    long long total_add_time = 0;
    long long total_search_time = 0;
    long long total_remove_time = 0;

    for(int t = 0; t < trials; ++t) {
        Doubly_linked_list list;
        list.fillRandom(num_elements);

        auto start_add = high_resolution_clock::now();
        list.add_randomly(12345);
        auto end_add = high_resolution_clock::now();
        total_add_time += duration_cast<nanoseconds>(end_add - start_add).count();

        auto start_search = high_resolution_clock::now();
        list.find(12345);
        auto end_search = high_resolution_clock::now();
        total_add_time += duration_cast<nanoseconds>(end_search - start_search).count();
        
        auto start_remove = high_resolution_clock::now();
        list.remove_randomly();
        auto end_remove = high_resolution_clock::now();
        total_add_time += duration_cast<nanoseconds>(end_remove - start_remove).count();

    }
    std::cout << "\n--- Benchmark Results for Doubly Linked List (avg over " << trials << " trials) ---\n";
    std::cout << "Insert time: " << total_add_time / trials << " ns\n";
    std::cout << "Search time: " << total_search_time / trials << " ns\n";
    std::cout << "Remove time: " << total_remove_time / trials << " ns\n";
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
    std::cout << "4. Benchmark Dynamic Array" << std::endl;
    std::cout << "5. Benchmark Singly Linked List" << std::endl;
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
        case '4':
            std::cout << "Enter number of elements: ";
            std::cin >> n;
            std::cout << "Enter number of trials: ";
            std::cin >> trials;
            benchmark_dynamic_array(n, trials);
            break;
        case '5':
            std::cout << "Enter number of elements: ";
            std::cin >> n;
            std::cout << "Enter number of trials: ";
            std::cin >> trials;
            benchmark_singly_linked_list(n, trials);
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    }
}