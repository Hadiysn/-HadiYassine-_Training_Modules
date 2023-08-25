#include <iostream>

int main() {
    
    // Declare 4 floating-point variables
    float num1, num2, num3, num4;
    
    // Displaying a message that prompts the user to enter a value for the first floating variable
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    // Displaying a message that prompts the user to enter a value for the second floating variable
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    // Displaying a message that prompts the user to enter a value for the third floating variable
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    
    // Displaying a message that prompts the user to enter a value for the Fourth floating variable
    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

    // Calculating the average value of the floating variables
    float average = (num1 + num2 + num3 + num4) / 4;

    //Displaying the calculated average using only 2 decimal points.
    std::cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}
