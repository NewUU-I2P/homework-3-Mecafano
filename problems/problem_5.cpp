float problemSolution5(float x, float y, char operation) {
   float result;
#include <iostream>
    using namespace std;

    float problemSolution5(float x, float y, char operation) {
        float result;

        switch (operation) {
            case '+':
                result = x + y;
                break;
            case '-':
                result = x - y;
                break;
            case '*':
                result = x * y;
                break;
            case '/':
                if (y != 0) {
                    result = x / y;
                } else {
                    cout << "Error: Division by zero!" << endl;
                    result = 0; // Default value for error
                }
                break;
            default:
                cout << "Error: Invalid operation!" << endl;
                result = 0; // Default value for error
                break;
        }

        return result;
    }

    int main() {
        float x, y;
        char operation;

        cout << "Enter the first number: ";
        cin >> x;

        cout << "Enter the arithmetic operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter the second number: ";
        cin >> y;

        float result = problemSolution5(x, y, operation);

        if (result != 0) {
            cout << "Result: " << result << endl;
        }

        return 0;
    }


    return result;
}
