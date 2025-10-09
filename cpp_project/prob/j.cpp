# include <string>
#include <iostream>

int main(){



std::string ch = "ch";
std::string filename {"filename"};
std::cout << ch << std::endl;
std::cout << filename << std::endl;

char kk[] {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','\0'};
int nn[] {1,2,3,4,5,6,7,8,9,10 ,'\0'};

std::cout << kk << std::endl;
std::cout << nn << &nn <<std::endl;

int count = sizeof(nn) / sizeof(nn[0]);

for (size_t i = 0; i < count; i++){
    std::cout << nn[i];
}


return 0 ;


}
