/*
Anthony Wang 10/6/2026
This program will calculate ohm's law based on user input 
*/

#include <iostream>
using namespace std;

int main()
{
    double voltage;
    double resistor;
    double current;

    cout << "Input: ";
    if (!(cin >> voltage >> resistor) || resistor <= 0)
    {
        cout << "Expected output: Invalid Input\n";
    }
    else
    {
        current = voltage / resistor;
        cout << "Expected output: Current " << current << " A\n";
    }
    
    return 0;
}
