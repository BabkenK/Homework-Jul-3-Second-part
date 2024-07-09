#include <iostream>

int main() {
    const int  size = 100;  
    
    char firststr[size] = {};  
    char secondstr[size] = {};

    std::cout << "Enter a first string: ";
    std::cin >> firststr;
    
    std::cout << "Enter a second string: ";
    std::cin >> secondstr;

    char *src = secondstr;
    char *frc = firststr;
    bool copied  = false;

    for (; *src != '\0'; ++src, ++frc){
        *frc = *src;
        copied = true;
        }
        *frc = '\0';
        
        
        if(copied) {
            std::cout << "After coping our first string is = " << firststr << std::endl;
        }else{
            std::cout << "We dont have copy" << std::endl;
        }
        
    return 0;
}