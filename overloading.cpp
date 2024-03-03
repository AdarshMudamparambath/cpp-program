#include <iostream>

using namespace std;

class Calculator {
public:
    // Overloaded method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded method to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // Call the add method with two integers
    cout << "Sum of 5 and 10: " << calc.add(5, 10) << endl;

    // Call the add method with three integers
    cout << "Sum of 5, 10, and 15: " << calc.add(5, 10, 15) << endl;

    // Call the add method with two doubles
    cout << "Sum of 5.5 and 10.5: " << calc.add(5.5, 10.5) << endl;

    return 0;
}
