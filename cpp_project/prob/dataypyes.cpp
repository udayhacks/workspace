# include <iostream>
using namespace std;

int main() {

    // normal int variable  stores a positive value and negative value
    int a = {1};
    // int variable with negative value and positive value
    signed int b = {-2} ;\
    signed int c = {3} ;
    // int variable with positive value
    unsigned int d = {4} ;


std::cout << "The value of a is " << a << std::endl;
std::cout << "The value of b is " << b << std::endl;
std::cout << "The value of c is " << c << std::endl;
std::cout << "The value of d is " << d << std::endl;



    // length of int variable stores a unsigned and  int almost same  length
    short int j = {1};
    long int k = {1};
    long long int l = {1};
std::cout << "The value of j is " << j << std::endl;
std::cout << "The value of k is " << k << std::endl;
std::cout << "The value of l is " << l << std::endl;

    // length of int variable stores b
    short signed int m = {-2};
    long signed int n = {-2};
    long long signed int o = {-2};

std:: cout << "The value of" << m << std::endl;
std::cout << "The value of" << n << std::endl ;
std::cout << "The value of" << o << std::endl;

std:: cout << "The value of long long " << n << sizeof(l) << std::endl;
std::cout << "The value of long " << sizeof(long) << std::endl;
std::cout << "The value of short  " << sizeof(short) << std::endl;






char s {'a'} ;
char x {69} ;
std::cout << x<<std::endl;
std::cout << s << std::endl;


std::string ch ="uday" ;
std::cout << ch << std::endl;


    int  kk[]  {1,2,3,4,5,6,7,8,9,10}; 
cout << kk << std::endl;

char charlist[]  {'a','b','c','d','e','f','g','h','i','j','\0'}; 
cout << charlist << std::endl;





return 0 ;



}