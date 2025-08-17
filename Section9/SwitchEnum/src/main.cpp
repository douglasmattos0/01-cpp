/*
 * Program Name: SwitchEnum 
 * Description : This program will explain the use of switch statements with enums
 * Author      : Douglas Ribas de Mattos
 * Date        : 16.08.2025
 */
// Section 9
// Switch with enumeration

#include <iostream>

using namespace std;

int main() {
    
    enum Direction {
        left, right, up, down
    };
    
    Direction heading {left};
    
    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl; // I used going left in the video by mistake
            break;
        default:
            cout << "OK" << endl;
    }
    
    cout <<  endl;
    return 0;
}
