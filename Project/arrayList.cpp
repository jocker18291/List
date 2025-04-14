#include "ArrayList.h"

ArrayList::ArrayList() {
    capacity = 10; //initializing it with 10
    size = 0;
    arr = new int [capacity];
}

ArrayList::~ArrayList() {
    delete[] arr;
}

void ArrayList::resize() {
    capacity *= 2;
    int* newArr = new int[capacity];
    for(int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
}

void ArrayList::add(int value, int index) {
    if(index < 0 || index > size) {
        std::cerr << "Index out of bounds!" << std::endl;
        return;
    }
    if(size == capacity){
        resize();
    }

    for(int i = size; i > index; --i) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;

    ++size;
}