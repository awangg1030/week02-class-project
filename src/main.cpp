/*
Anthony Wang 10/6/2026
This program will calculate Ohm's Law based on user input
*/

#include <iostream>
using namespace std;

int main()
{
    double voltage;
    double resistor;
    double current;

    if (!(cin >> voltage >> resistor) || resistor <= 0)
    {
        cout << "Invalid input\n";
    }
    else
    {
        current = voltage / resistor;
        cout << "Current: " << current << " A\n";
    }

    return 0;
}