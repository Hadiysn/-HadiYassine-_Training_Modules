#include <iostream>
using namespace std;

int main() {

    // Define variables 
    int num1, num2, sum;
    
    // Prompting the user to enter a value for the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompting the user to enter a value for the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // adding the 2 numbers
    sum = num1 + num2;

    // Check if the sum is even or odd
    if (sum % 2 == 0) {
        cout << "The sum of the two numbers is even " << endl;
       } 
        else {
        cout << "The sum of the two numbers is odd " << endl;
       }

    return 0;
}
    
     
