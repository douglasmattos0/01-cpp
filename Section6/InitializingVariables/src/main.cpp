/*
 * Program Name: InitializingVariables
 * Description : This program will calculate the area of a room in square feet
 * Author      : Douglas Ribas de Mattos
 * Date        : 02.08.2025
 */

#include <iostream>

using namespace std;

int main() {

    cout << "Enter the width of the room: ";
    int root_width {0};
    cin >> root_width;

    cout << "Enter the length of the room: ";
    int root_length {0};
    cin >> root_length;

    cout << "The area of the room is: " << root_width * root_length << " square feet." << endl;
    return 0;
}