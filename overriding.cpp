#include <iostream>

using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the makeSound() function from the base class
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    // Override the makeSound() function from the base class
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    // Pointing to a Dog object
    animalPtr = &dog;
    animalPtr->makeSound(); // Output: Dog barks

    // Pointing to a Cat object
    animalPtr = &cat;
    animalPtr->makeSound(); // Output: Cat meows

    return 0;
}
