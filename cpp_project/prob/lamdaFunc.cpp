#include <iostream>
using namespace std;
 
int main(){
int cl = 12;
int* ptr= &cl;

auto lambda = [ptr](int a, int b) -> double{ return (a*b*(*ptr));};

cout << lambda(2,3) << endl;

cl= 10;

cout << lambda(2,3) << endl;


return 0 ; 
}


