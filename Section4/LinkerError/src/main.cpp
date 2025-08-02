/*
 * Program Name: LinkerError
 * Description : Simple C++ program that show linker error.
 * Author      : Douglas Ribas de Mattos
 * Date        : 02.08.2025
 */

#include <iostream>

extern int x;

int main() {

    std::cout << "Hello world" << std::endl;
    std::cout << x; 
    return 0;
}