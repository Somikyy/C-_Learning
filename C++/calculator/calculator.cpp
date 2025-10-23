#include <iostream>
#include <cmath>

int main(void) {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cout << "\nA: ";
    std::cin >> a;
    std::cout << "\nB: ";
    std::cin >> b;
    std::cout << "\nEnter the operation: ";
    char op;
    std::cin >> op;
    switch (op) {
        case '+':
            std::cout << "Sum of " << a << " and " << b << " is " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Difference of " << a << " and " << b << " is " << a - b << std::endl;
            break;
        case '*':
            std::cout << "Product of " << a << " and " << b << " is " << a * b << std::endl;
            break;
        case '/':
            std::cout << "Quotient of " << a << " and " << b << " is " << a / b << std::endl;
            break;
        case '%':
            std::cout << "Remainder of " << a << " and " << b << " is " << a % b << std::endl;
            break;
        case '^':
            std::cout << "Power of " << a << " and " << b << " is " << pow(a, b) << std::endl;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
            break;
    }
    return 0;
}