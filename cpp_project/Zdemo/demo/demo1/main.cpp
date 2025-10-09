#include <iostream>
using namespace std;

class Base {

int a ,b ,k;

public:

    Base(int a ,int b){
    this->a = a;

         
        cout<<"Base constructor"<<endl;
    }

    int fun1(){
        return k;
    }   
};



int main()
{
    cout<<"Hello World"<<endl;
    Base b(10,20);
    cout<<b.fun1()<<endl;
};













