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
    int numValues = argc - 1;
    cout << "values: ";
    for(int i = 0; i < numValues - 1; i++) {
        cout << values[i] << ", ";
    }
    // print the last value separately so there isn't a comma at the end
    cout << values[numValues - 1] << endl;
    exit(EXIT_SUCCESS);
}