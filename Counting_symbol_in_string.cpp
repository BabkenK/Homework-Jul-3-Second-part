#include <iostream>

int main() {
    const int size = 40; // Maximum size for the character array
    
    char arr[size] = {}; // Initialize array with zeros
    char ch = 0;
    int count = 0;

    std::cout << "Enter a string: ";
    std::cin >> arr;

    std::cout << "Enter a character to count: ";
    std::cin >> ch;

    char *str = arr;
    while (*str != '\0') {
        if (*str == ch) {
            ++count;
        }
        ++str;
    }

    if (count > 0) {
        std::cout << "Our symbol   = " << ch << "' appears " << count << " times  " << std::endl;
    } else {
        std::cout << "The symbol '" << ch << "' is not presented" << std::endl;
    }

    return 0;
}


