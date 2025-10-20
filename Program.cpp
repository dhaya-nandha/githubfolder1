#include <iostream>
#include <cmath>

int main() {
    std:: cout << "Vanakamma da mapla !\n";
    
    //hypoteneous of traingle
    double r;
    double h, b;
    
    std::cout << "Enter height :\n";
    std::cin >> h;
    std::cout << "\nENter base :\n";
    std::cin >> b;
    r = sqrt(pow(h,2) + pow(b,2));
    std::cout << r;

    return 0;
}