#include <iostream>

bool isPrime(int num) {
    if (num <= 1)
        return false; // Numbers less than or equal to 1 are not prime

    // Check divisibility from 2 to num - 1
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return false; // If num is divisible by any number from 2 to num/2, it's not prime
    }

    return true; // If num is not divisible by any number from 2 to num/2, it's prime
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (isPrime(num))
        std::cout << num << " is a prime number." << std::endl;
    else
        std::cout << num << " is not a prime number." << std::endl;

    return 0;
}
