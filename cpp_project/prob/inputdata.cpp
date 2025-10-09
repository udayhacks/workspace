#include <iostream>
#include <string>

int main() {
    
    std::cout << "Hello, World!" << std::endl;
    
    int age ;
    std::string full_name ;
    std::cin >> full_name ;
    std::cout << "Hello " << full_name << std::endl;
    std::cout << "Enter your age: "  << std::endl; 
    std::cin >> age;
    std::cout << "You are " << age << " years old" << std::endl;



    std::getline(std::cin, full_name);
    std::cout << full_name << std::endl;




    return 0;
}  