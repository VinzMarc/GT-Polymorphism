#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual void showDetails() {
        cout << "Employee details" << endl;
    }
};

// Derived class - Manager
class Manager : public Employee {
public:
    void showDetails() override {
        cout << "I am a Manager. I manage teams." << endl;
    }
};

// Derived class - Developer
class Developer : public Employee {
public:
    void showDetails() override {
        cout << "I am a Developer. I write code." << endl;
    }
};

int main() {
    int choice;
    cout << "What type of employee would you like to create?" << endl;
    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    Employee* emp;

    if (choice == 1) {
        emp = new Manager();
    } else if (choice == 2) {
        emp = new Developer();
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    emp->showDetails();

    // Clean up memory
    delete emp;

    return 0;
}