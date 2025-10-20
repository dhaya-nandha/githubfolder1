#include <iostream>
#include <cmath>

int main() {
    std:: cout << "Vanakamma da mapla !\n";
    
    //switch statement

    char grade;
    std::cout << "Enter your grade (A , B , F):\n";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "Good grade !";
            break;
        case 'B':
            std::cout << "Average grade .";
            break;
        case 'F':
            std::cout << "You failed !";
            break;
        deafult:
            std::cout << "Enter only (A B F)";
    }

    return 0;
}