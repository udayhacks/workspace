# include <iostream>


int add (int a ,int b ) {

return a+b;

}




int main(){

int a = 13 ;
int d {12};
int b = 14 ;
int val = a+b ;
std::cout << "The sum of " << a << " and " << b << " is " << val << std::endl;
std::cout << "The sum of " << a << " and " << b << " is " << add(a,d) << std::endl;
return 0 ;
}