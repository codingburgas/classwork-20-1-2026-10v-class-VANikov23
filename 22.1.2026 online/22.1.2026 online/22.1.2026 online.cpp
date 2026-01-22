#include <iostream>
#include "../Static biblioteka/math.h"
using namespace std;

int main() {
    cout << "Select a number for math" << endl;
    cout << "1 = Add" << endl;
    cout << "2 = Subtract" << endl;
    cout << "3 = Multiply" << endl;
    cout << "4 = Divide" << endl;
    int choice;
    cin >> choice;

    int x, y;
    cout << "Input two numbers: ";
    cin >> x >> y;

    if (choice == 1) {
        cout << "Result: " << add(x, y) << endl;
    }
    else if (choice == 2) {
        cout << "Result: " << subtract(x, y) << endl;
    }
    else if (choice == 3) {
        cout << "Result: " << multi(x, y) << endl;
    }
    else if (choice == 4) {
        if (y == 0) {
            cout << "Error: Division by zero" << endl;
        } else {
            cout << "Result: " << divide(x, y) << endl;
        }
    }
    else {
        cout << "Invalid choice" << endl;
    }
}