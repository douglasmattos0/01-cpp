/*
 * Program Name: MultiplicationTable
 * Description : This program will explain the use of for loops to create a multiplication table
 * Author      : Douglas Ribas de Mattos
 * Date        : 17.08.2025
 */
// Section 9
// Nested Loops - Multiplication Table

#include <iostream>

using namespace std;

int main() {
    
     for (int num1 {1}; num1 <=10 ; ++num1) {
        for (int num2 {1}; num2 <=10; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "-----------" << endl;
    }
    
    cout << endl;
    return 0;
}
