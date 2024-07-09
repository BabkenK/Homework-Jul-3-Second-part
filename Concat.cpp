#include <iostream>

int main() {
    const int size = 100;
    
    char firststr[size] = {};
    char secondstr[size] = {};

    std::cout << "Enter the first string: ";
    std::cin >> firststr; // Read first string
    
    std::cout << "Enter the second string: ";
    std::cin >> secondstr; // Read second string

    char *frc = firststr;
    while (*frc != '\0') {
        ++frc;
    }

    
    char *src = secondstr;
    while (*src != '\0') {
        *frc = *src;
        ++src;
        ++frc;
    }
    *frc = '\0'; 
    
    std::cout << "Concatenated string: " << firststr << std::endl;

    return 0;
}
