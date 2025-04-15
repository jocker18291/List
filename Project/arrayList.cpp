#include "ArrayList.h"
#include <iostream>
#include <random>

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

void ArrayList::remove(int index) {
    if (index < 0 || index >= size) {
        std::cerr << "Index out of bounds!" << std::endl;
    }

    for(int i = index; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size;
}

int ArrayList::search(int value) {
    for(int i = 0; i < size; ++i) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;
}

void ArrayList::print() {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " " << std::endl;
    }
}

void ArrayList::fillRandom(int count, int min, int max) {
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<> dist(min, max);

    for(int i = 0; i < count; ++i) {
        int val = dist(gen);
        add(val, size);
    }
}

int ArrayList::getSize() const {
    return size;
}