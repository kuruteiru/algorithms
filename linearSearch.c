#include "linearSearch.h"

bool hasValue(int *array, size_t size, int value) {
    for (size_t i = 0; i < size / sizeof(int); i++)
        if (array[i] == value) return true;
        
    return false;
}

int indexOf(int *array, size_t size, int value) {
    for (size_t i = 0; i < size / sizeof(int); i++)
        if (array[i] == value) return i;
        
    return NULL;
}