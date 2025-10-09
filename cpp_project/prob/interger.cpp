# include <iostream>

int main ()
{


// here the variable value is 0 for brace and functional initialization and garbage value for assignment initialization


int fucntional_initialized1  ;
int assignment_initialized1 ;
int brace_initialized1 {} ;

// here the varible value is as per assigned value 

int functional_initialized2 (5);
int brace_initialized2 {5};
int assignment_initialized2 = 3 ;


// here the variable value is decimal part of given value 
int fucntional_initialized3 (2.9) ;
int assignment_initialized3 = 1.1;

// In the brace assignment  it raise the compilation error 
// int brace_initialized3 {2.9} ;

std::cout << "The value of functional_initialized1 is " << fucntional_initialized1 << std::endl;
std::cout << "The value of assignment_initialized1 is " << assignment_initialized1 << std::endl;
std::cout << "The value of brace_initialized1 is " << brace_initialized1 << std::endl;

std::cout << "The value of functional_initialized2 is " << functional_initialized2 << std::endl;
std::cout << "The value of assignment_initialized2 is " << assignment_initialized2 << std::endl;
std::cout << "The value of brace_initialized2 is " << brace_initialized2 << std::endl;

std::cout << "The value of functional_initialized3 is " << fucntional_initialized3 << std::endl;
std::cout << "The value of assignment_initialized3 is " << assignment_initialized3 << std::endl;
// std::cout << "The value of brace_initialized3 is " << brace_initialized3 << std::endl;



// sizeof()  fucntion is used for finiding the size of the variable

std::cout << "Size of the int is of "<< brace_initialized1 << " == " <<  sizeof(brace_initialized1) << std::endl;
std::cout << "Size of the int is of  " << brace_initialized2 << " == " <<  sizeof(brace_initialized2) << std::endl;
std::cout << "Size of the int is  of " << assignment_initialized1 << "  == " <<  sizeof(assignment_initialized1) << std::endl;
 

return  0 ;














}