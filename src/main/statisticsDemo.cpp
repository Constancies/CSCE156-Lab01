#include <iostream>
#include <vector>
#include "statistics.h"
using namespace std;

int main(int argc, char **argv) {
    if(argc <= 1) {
        cout << "Please provide a list of numbers as command line arguments" << endl;
        exit(EXIT_SUCCESS);
    }
    vector<int> values;
    for(int i = 1; i < argc; i++) {
        values.push_back(atoi(argv[i]));
    }
    
    int min = Statistics::getMin(values);
    int max = Statistics::getMax(values);
    int sum = Statistics::getSum(values);
    double average = Statistics::getAverage(values);

    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl;
    cout << "The highest is " << max << endl;
    cout << "The lowest is " << min << endl;

    exit(EXIT_SUCCESS);
}