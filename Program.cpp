#include <iostream>
#include <cmath>

int main() {
    std:: cout << "Vanakamma da mapla !\n";
    
    //if else statements
    int age;
    
    std::cout << "Enter your age:\n";
    std::cin >> age;
    if( age >= 18) {
        std::cout << "Welcome to the site !\n";
    } else {
        std::cout << "Your aren't allowed to this site .";
    }

    return 0;
}