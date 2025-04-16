#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList {
private:
    int* arr;
    int size;
    int capacity;

    void resize();
public:
    ArrayList();  //Constructor
    ~ArrayList();  //Destructor

    void add(int value, int index);
    void remove(int index);
    bool search(int value);
    void print();
    void fillRandom(int count, int min = 0, int max = 1000);
    int getSize() const;
};

#endif