#include <iostream>

class ArrayList {
private:
    int* arr;
    int size;
    int capacity;
public:
    ArrayList();  //Constructor
    ~ArrayList();  //Destructor

    void add(int value, int index);
    void remove(int index);
    int search(int value);
    void print();
};