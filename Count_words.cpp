#include <iostream>

int main() {
    const int size = 100;
    char arr[size] = {};
    int charcount = 0; // Changed variable name to charcount
    bool inword = false;

    std::cout << "Enter the string: ";
    std::cin >> arr;

    char *str = arr;

    while (*str != '\0') {
        if (*str != ' ') {
            if (!inword) {
                ++charcount; // Increment character count
                inword = true;
            }
        } else {
            inword = false;
        }
        ++str;
    }

    std::cout << "Number of characters: " << charcount << std::endl; // Adjusted output message

    return 0;
}
