#include <cstddef>

#include "statistics.h"
    
int Statistics::getSum(int *array, int size) {
    if(array == NULL || size < 1) {
        return 0;
    }
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

double Statistics::getAverage(int *array, int size) {
    if(array == NULL || size < 1) {
        return 0;
    }
    return getSum(array, size) / (double) size;
}

    int Statistics::getMin(int *array, int size) {
    if(array == NULL || size < 1) {
        return 0;
    }
    int min = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int Statistics::getMax(int *array, int size) {
    if(array == NULL || size < 1) {
        return 0;
    }
    int max = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}