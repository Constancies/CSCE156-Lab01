/**
 * Author: Alexander Sanderson
 * Date: 2025/01/15
 * C++ re-implementation of cbourke's Java Statistics class
 * 
 * Collection of utilities to compute statistics on integer arrays.
 */

#include <vector>
using namespace std;

class Statistics {
    public:
    /**
     * Computes the sum of the elements in the array of integers.
     */
    static int getSum(vector<int> values);

    /**
     * Computes the average value of the elements in 
     * the array of integers.
     */
    static double getAverage(vector<int> values);

    /**
     * Computes the minimum element in the array of integers.
     */
    static int getMin(vector<int> values);

    /**
     * Computes the maximum element in the array of integers.
     */
    static int getMax(vector<int> values);
};