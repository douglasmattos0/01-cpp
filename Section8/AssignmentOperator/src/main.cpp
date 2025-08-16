/*
 * Program Name: AssignmentOperator
 * Description : This program will explain the use of the assignment operator in C++. 
 * Author      : Douglas Ribas de Mattos
 * Date        : 09.08.2025
 */
#include <iostream>

using namespace std;

int main() {

    int num1 {10};
    int num2 {20};

    num1 = num2 = 1000;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}