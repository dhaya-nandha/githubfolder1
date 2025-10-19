#include <iostream>

int main() {
    std:: cout << "Vanakamma da mapla !\n";
    std::string name;
    int age;

    std::cout << "Whats your Fullname ?\n";
    std::getline(std::cin, name);
    std::cout << "Whats your age ?\n";

    
    std::cin >> age;
    std::cout << "Hellow " << name << '\n';
    std::cout << "You are " << age << " years old.\n";

    return 0;
}