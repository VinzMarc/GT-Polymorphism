#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed.\n";
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    int choice;

    cout << "=== Simple Calculator ===\n";
    cout << "1. Add two integers\n";
    cout << "2. Add three integers\n";
    cout << "3. Add two floats\n";
    cout << "4. Subtract two integers\n";
    cout << "5. Multiply two integers\n";
    cout << "6. Divide two floats\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        }
        case 2: {
            int a, b, c;
            cout << "Enter three integers: ";
            cin >> a >> b >> c;
            cout << "Result: " << calc.add(a, b, c) << endl;
            break;
        }
        case 3: {
            float a, b;
            cout << "Enter two floats: ";
            cin >> a >> b;
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        }
        case 4: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << calc.subtract(a, b) << endl;
            break;
        }
        case 5: {
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result: " << calc.multiply(a, b) << endl;
            break;
        }
        case 6: {
            float a, b;
            cout << "Enter two floats: ";
            cin >> a >> b;
            cout << "Result: " << calc.divide(a, b) << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please enter a number between 1 and 6.\n";
    }

    return 0;
}
