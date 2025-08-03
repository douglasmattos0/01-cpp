/*
 * Program Name: Comments
 * Description : Create a C++ program that asks the user for their favorite number between 1 and 100
 *               then read this number from the console.
 * Author      : Douglas Ribas de Mattos
 * Date        : 02.08.2025
 */

#include <iostream>

int main() {
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    return 0;
}