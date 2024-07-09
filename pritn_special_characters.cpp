#include <iostream>

int main() {
    const int size = 100;
    char str[size] = {};

    std::cout << "Please enter your string: ";

    int i = 0;
    char c = 0;
    for (i = 0; i < size - 1; ++i) {
        std::cin >> std::noskipws >> c;  
        if (c == '\n') {
            break;
        }
        str[i] = c;
    }
    str[i] = '\0';  

    char* ptr = str;

    std::cout << "Special characters in the string: ";

    for (; *ptr != '\0'; ++ptr) {
        if (!((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= '0' && *ptr <= '9'))) {
            std::cout << *ptr << std::endl;;
        }
    }


    return 0;
}

