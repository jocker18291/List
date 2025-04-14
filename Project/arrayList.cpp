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