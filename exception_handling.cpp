#include <iostream>

using namespace std;

int main() {
    try {
       
        int numerator, denominator;
        double result;

        cout << "Enter the numerator: ";
        cin >> numerator;

        cout << "Enter the denominator: ";
        cin >> denominator;

       
        try {
            if (denominator == 0) {
                throw "Division by zero is not allowed"; 
            }

            result = static_cast<double>(numerator) / denominator;
            cout << "Result of division: " << result << endl;
        }
        catch (const char* error) {
            cerr << "Error: " << error << endl;
        }
    }
    catch (...) {
        cerr << "An unexpected error occurred" << endl;
    }

    return 0;
}
