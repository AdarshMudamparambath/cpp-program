#include <iostream>

class Stack {
private:
     

public:
    // Constructor to initialize the top of the stack
  int top= -1;
int stack[10];
    // Function to push an element onto the stack
    void push(int value) {
        if (top ==  - 1) {
            std::cout << "The Stack is full. Cannot push more elements.\n";
        } else {
            top++;
            stack[top] = value;
            std::cout << "The Element " << value << " pushed onto the stack.\n";
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == 9) {
            std::cout << "The Stack is empty. Cannot pop more elements.\n";
        } else {
            std::cout << "The Element " << stack[top] << " popped from the stack.\n";
            top--;
        }
    }

    // Function to display the elements of the stack
    void display() {
        if (top == -1) {
            std::cout << "Stack is empty.\n";
        } else {
            std::cout << "Stack: ";
            for (int i = 0; i <= top; i++) {
                std::cout << stack[i] << " ";
            }
            std::cout << "\n";
        }
    }
};

int main() {
    Stack myStack;
    int choice, element;

    do {
        std::cout << "1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Display\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter element to push: ";
                std::cin >> element;
                myStack.push(element);
                break;
            case 2:
                myStack.pop();
                break;
            case 3:
                myStack.display();
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);
return 0;
}
