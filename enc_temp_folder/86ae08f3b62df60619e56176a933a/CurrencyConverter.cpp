// CurrencyConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

std::map<int, string> selections = {
    { 1, "NZD" },
    { 2, "USD" },
    { 3, "AUD" },
    { 4, "GBP" }
};


int main()
{
    int convert_from, convert_to;
    while (true) {
        try {
            cout << "Convert from: \n1 - NZD\n2 - USD\n3 - AUD\n4 - GBP\n\Pick an option: "; // Type a number and press enter
            cin >> convert_from; // Get user input from the keyboard
            cout << "Convert to: \n1 - NZD\n2 - USD\n3 - AUD\n4 - GBP\nPick an option: "; // Type a number and press enter
            cin >> convert_to; // Get user input from the keyboard
            cout << "Converting from " << selections[convert_from] << " to " << selections[convert_to] << "\n";

            float val;
            cout << selections[convert_from] << "$";
            cin >> val;

            if (convert_from == 2) {
                val = val * 1.4;
            }
            else if (convert_from == 3) {
                val = val * 1.05;
            }
            else if (convert_from == 4) {
                val = val * 1.91;
            }

            if (convert_to == 2) {
                val = val * 0.72;
            }
            else if (convert_to == 3) {
                val = val * 0.95;
            }
            else if (convert_to == 4) {
                val = val * 0.52;
            }

            cout << "converted to " << val << " " << selections[convert_to] << "\n";
        }
        catch (...) {
            cout << "Make sure to enter valid values\n";
            throw;
        }
    }
}
