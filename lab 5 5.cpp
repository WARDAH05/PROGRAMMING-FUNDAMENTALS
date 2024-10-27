#include <iostream>
using namespace std;

int main() {
    const int DAYS_IN_WEEK = 7;
    double temperatures[DAYS_IN_WEEK];
    double sum = 0.0;
    double average;
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        cout << "Enter temperature for Day " << i + 1 << ": ";
        cin >> temperatures[i];
        sum += temperatures[i];
    }
    average = sum / DAYS_IN_WEEK;


    cout << "\nTemperatures for the week:\n";
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        cout << "Day " << i + 1 << ": " << temperatures[i] << "°C\n";
    }
    cout << "\nAverage temperature: " << average << "°C\n";

    return 0;
}

