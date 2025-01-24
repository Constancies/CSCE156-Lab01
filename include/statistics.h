/**
 * Author: Alexander Sanderson
 * Date: 2025/01/15
 * C++ re-implementation of cbourke's Java Statistics class
 * 
 * Collection of utilities to compute statistics on integer arrays.
 */

class Statistics {
    public:
    /**
     * Computes the sum of the elements in the array of integers.
     */
    int getSum(int *array, int size);

    /**
     * Computes the average value of the elements in 
     * the array of integers.
     */
    double getAverage(int *array, int size);

    /**
     * Computes the minimum element in the array of integers.
     */
    int getMin(int *array, int size);

    /**
     * Computes the maximum element in the array of integers.
     */
    int getMax(int *array, int size);
};