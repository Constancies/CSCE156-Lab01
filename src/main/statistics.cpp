/**
 * Author: Alexander Sanderson
 * Date: 2025/01/15
 * C++ re-implementation of cbourke's Java Statistics class
 * 
 * Collection of utilities to compute statistics on integer arrays.
 */

#include <cstddef>

class Statistics {
    public:
    /**
     * Computes the sum of the elements in the array of integers.
     */
    int getSum(int *array, int size) {
        if(array == NULL || size < 1) {
            return 0;
        }
        int sum = 0;
        for(int i = 0; i < size; i++) {
            sum += array[i];
        }
        return sum;
    }

    /**
     * Computes the average value of the elements in 
     * the array of integers.
     */
    double getAverage(int *array, int size) {
        if(array == NULL || size < 1) {
            return 0;
        }
        return getSum(array, size) / (double) size;

    }

    /**
     * Computes the minimum element in the array of integers.
     */
    int getMin(int *array, int size) {
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

    /**
     * Computes the maximum element in the array of integers.
     */
    int getMax(int *array, int size) {
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

};