#include <iostream>
#include <string>
#include "gramUserVisitor.h"
using namespace std;

int main() {
    
    std::string expression = "print(10+20);a = 10.2 + .5; b = 20 + a; print(a+b); def f(x){return x*x*x;}; print(a,b,a+b,b+a,f(3));";
    gramUserVisitor visitor(expression);
    std::cout << "Result :" << std::endl;
    int i = 0;
    for (auto var : visitor.res)
    {
        std::cout << i << ":" << var << std::endl;
        i++;
    }

    /*
    for (auto var : visitor.value_var)
    {
        std::cout << var.first << ":" << var.second << std::endl;
    }
    */
    
    return 0;
}