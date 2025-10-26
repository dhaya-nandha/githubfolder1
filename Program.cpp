#include <iostream>
#include <cmath>

int main() {
    std:: cout << "Vanakamma da mapla !\n";
    
    //Loops
    //for loop
    int a = 0;
    for(int i=5; i >=0; i--) {
        std::cout << i << '\n';
    }

    //while loop
    while (a<5) {
        std::cout << a << '\n';
        a++;
    }

    //do-while loop
    do {
        std::cout << a << '\n';
        a++;
    } while (a<10);

    return 0;
}