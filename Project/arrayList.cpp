#include "ArrayList.h"

ArrayList::ArrayList() {
    capacity = 10; //initializing it with 10
    size = 0;
    arr = new int [capacity];
}