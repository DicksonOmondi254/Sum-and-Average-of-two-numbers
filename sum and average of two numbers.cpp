#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the input numbers, sum, and average
    double num1, num2, sum, average;

    // Ask the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Calculate the average of the two numbers
    average = sum / 2;

    // Display the sum and average
    cout << "Sum of the two numbers: " << sum << endl;
    cout << "Average of the two numbers: " << average << endl;

    return 0;
}

