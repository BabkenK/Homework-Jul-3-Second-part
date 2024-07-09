#include <iostream>

int main() {
    const int MAX_SIZE = 40;  
    
    char arr[MAX_SIZE] = {};  

    std::cout << "Enter a string: ";
    std::cin >> arr;

     char *ptr = arr;
    int index = 0;

     while (*ptr != '\0') {
         if (index % 2 == 0) {
            std::cout << *ptr << std::endl;
        }
        ++ptr;
        ++index;
    }

    return 0;
}