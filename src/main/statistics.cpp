/**
 * Author: Alexander Sanderson
 * Date: 2025/01/28
 * 
 * Collection of utilities for computing statistics about integers
 * and integer vectors.
 */

#include <cstddef>
#include <vector>
#include "statistics.h"
using namespace std;

// TODO: Refactor to use vectors instead of arrays
int Statistics::getSum(vector<int> values) {
    if(values.empty()) {
        return 0;
    }
    int sum = 0;
    for(int i = 0; i < (int)values.size(); i++) {
        sum += values[i];
    }
    return sum;
}

double Statistics::getAverage(vector<int> values) {
    if(values.empty()) {
        return 0;
    }
    return getSum(values) / (double) (int)values.size();
}

int Statistics::getMin(vector<int> values) {
    if(values.empty()) {
        return 0;
    }
    int min = values[0];
    for(int i = 1; i < (int)values.size(); i++) {
        if(values[i] < min) {
            min = values[i];
        }
    }
    return min;
}

int Statistics::getMax(vector<int> values) {
    if(values.empty()) {
        return 0;
    }
    int max = values[0];
    for(int i = 1; i < (int)values.size(); i++) {
        if(values[i] > max) {
            max = values[i];
        }
    }
    return max;
}

