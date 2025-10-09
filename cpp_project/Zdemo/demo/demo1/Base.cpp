#include<Base.h>


Base::Base(int a, int b):a(a),b(b)
{
    cout<<"Base constructor"<<endl;
}
int Base::fun1()
{
    return a+b;
}
