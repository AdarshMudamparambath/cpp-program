#include <iostream>

using namespace std;

int main() {
    try {
        // Attempt to execute code that may throw an exception
        int numerator, denominator;
        double result;

        cout << "Enter the numerator: ";
        cin >> numerator;

        cout << "Enter the denominator: ";
        cin >> denominator;

        // Attempt division operation within the try block
        try {
            if (denominator == 0) {
                throw "Division by zero is not allowed"; // Throwing a C-style string
            }

            result = static_cast<double>(numerator) / denominator;
            cout << "Result of division: " << result << endl;
        }
        catch (const char* error) {
            // Catch and handle the division by zero exception
            cerr << "Error: " << error << endl;
        }
    }
    catch (...) {
        // Catch any other unexpected exceptions
        cerr << "An unexpected error occurred" << endl;
    }

    return 0;
}
