/**
 * Author: Alexander Sanderson
 * Date: 2025/01/28
 * 
 * Program to take the user's birth date as arguments
 * and calculate their age.
 */
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int main(int argc, char **argv) {
    if(argc != 4) {
        cout << "ERROR: Only three args can be taken!" << endl;
        cout << "Usage: birthday [YEAR] [MONTH] [DAY]" << endl;
        exit(EXIT_FAILURE);
    }
    // I'm unsure if c++ has an equivalent to python's Maps
    vector<string> months;
    months.push_back("January");
    months.push_back("February");
    months.push_back("March");
    months.push_back("April");
    months.push_back("May");
    months.push_back("June");
    months.push_back("July");
    months.push_back("August");
    months.push_back("September");
    months.push_back("October");
    months.push_back("November");
    months.push_back("December");

    string name = "Alexander Sanderson";
    
    time_t timestamp;
    time(&timestamp);
    
    struct tm *currentTime = localtime(&timestamp);

    int year = atoi(argv[1]);
    if(year > currentTime->tm_year + 1900) {
        throw runtime_error("Passed year is later than the current year!");
    }
    int month = atoi(argv[2]);
    if(month < 1 || month > 12) {
        throw runtime_error("Passed month is not a real month!");
    }
    int day = atoi(argv[3]);
    if(day < 1 || day > 31) {
        throw runtime_error("Passed day is not a real day");
    }

    int diffYear = 0;
    if(currentTime->tm_mon + 1 > month) {
        diffYear = currentTime->tm_year + 1900 - year;
    } else if(currentTime->tm_mon + 1 < month) {
        diffYear = currentTime->tm_year + 1900 - year - 1;
    } else if(currentTime->tm_mday + 1 >= day) {
        diffYear = currentTime->tm_year + 1900 - year;
    } else {
        diffYear = currentTime->tm_year + 1900 - year - 1;
    }

    cout << "Greetings, " << name << "! Today you are " << diffYear << " years old!" << endl;
}