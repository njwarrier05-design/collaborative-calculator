
#include <iostream>
using namespace std;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);

int main() {
    int a, b, choice;

    cout << "\n===== SIMPLE CALCULATOR =====\n";

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result: " << add(a,b);
            break;

        case 2:
            cout << "Result: " << subtract(a,b);
            break;

        case 3:
            cout << "Result: " << multiply(a,b);
            break;

        case 4:
            if(b != 0)
                cout << "Result: " << divide(a,b);
            else
                cout << "Cannot divide by zero";
            break;

        default:
            cout << "Invalid choice";
    }

    cout << endl;
    return 0;
}
