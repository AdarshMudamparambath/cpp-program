#include <iostream>

bool isLeapYear(int year) {
    // Leap year is divisible by 4
    // But if the year is divisible by 100, it must also be divisible by 400 to be a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (isLeapYear(year))
        std::cout << year << " is a leap year." << std::endl;
    else
        std::cout << year << " is not a leap year." << std::endl;

    return 0;
}
